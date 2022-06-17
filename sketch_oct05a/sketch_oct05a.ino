#include <Wire.h>
#include "rgb_lcd.h"
const int B = 4275;               
const int R0 = 100000; //100K            
const int pinTempSensor = A0;  //port capteur température  
#include <math.h>
 
#if defined(ARDUINO_ARCH_AVR)
#define debug  Serial
#elif defined(ARDUINO_ARCH_SAMD) ||  defined(ARDUINO_ARCH_SAM)
#define debug  SerialUSB
#else
#define debug  Serial
#endif
rgb_lcd lcd;




#include <Wire.h> //bibliothéque LCD

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;




int nbFlash = 1;
int nbFlashTotal = 720;
int state = HIGH;
unsigned long switchTime;
unsigned long tempsAllume = 30000;
unsigned long tempsEteint = 570000;

void setup() {
   Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

 lcd.begin(16, 2);

   lcd.setRGB(colorR, colorG, colorB);


    // Print a message to the LCD.
    //lcd.print("hello, world!");

    switchTime = tempsAllume;
}

// the loop function runs over and over again forever
void loop() {

   // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
     int valeur = analogRead(A0);
    lcd.setCursor(0, 0);
    // print the number of seconds since reset:
    String affichage = "Nb Flash : " + String(nbFlash);
    lcd.print(affichage);

   lcd.setCursor(0, 1);
 int a = analogRead(pinTempSensor);
    float R = 1023.0/a-1.0;
    R = R0*R;
    float temperature = 1.0/(log(R/R0)/B+1/298.15)-273.15; // conversion de la température avec datasheet
    Serial.print("temperature en = °");
    lcd.setCursor(0,0); //écran lcd ligne haut

    lcd.setCursor(0,1);//écran lcd ligne bas
    lcd.print(temperature);
    lcd.print(".C");//affichage de signe degrès
   
 
  unsigned long ellapsedTime = millis();

  if(ellapsedTime >= switchTime)
  {
    if(state == HIGH)
    {
      switchTime += tempsEteint;
      state = LOW;
    }
    else
    {
      switchTime += tempsAllume;
      state = HIGH;
      nbFlash++;
   
    }

   
  }

  
  
   
  digitalWrite(LED_BUILTIN, state);   // turn the LED on (HIGH is the voltage level)                      // wait for a second
}
