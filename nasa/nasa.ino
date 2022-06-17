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
float UR=1.0; //Renseigner la tension UR en Volt aux bornes de la LED Rouge 
float UG=1.0; //Renseigner la tension UG en Volt aux bornes de la LED Verte 
float UB=1.0; //Renseigner la tension UB en Volt aux bornes de la LED Bleue 

int LEDR=6; //Brocher la LED Rouge sur le port LEDR 
int LEDG=5; //Brocher la LED Verte sur le port LEDG 
int LEDB=3; //Brocher la LED Bleue sur le port LEDB 

int Red=0; 
int Green=0; 
int Blue=0;
 
float UMax=1.5; //Tension maximale en Volt admise aux bornes des LED de couleur primaire 
int ValMax=0; 




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

   pinMode(LEDR,OUTPUT); 
  pinMode(LEDG,OUTPUT); 
  pinMode(LEDB,OUTPUT); 
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
 ValMax=(255/5)*UMax; 

    if(state == HIGH)
    {
      UR = 1.0;
      UG = 1.0;
      UB = 1.0;
    }
    else
    {
      UR = 0.0;
      UG = 0.0;
      UB = 0.0;
    }

    if(UR<=1.5){ 
      if(UG<=1.5){ 
        if(UB<=1.5){
          
          Red=(ValMax/UMax)*UR; 
          analogWrite(LEDR,Red);

          Green=(ValMax/UMax)*UG; 
          analogWrite(LEDG,Green);
          
          Blue=(ValMax/UMax)*UB; 
          analogWrite(LEDB,Blue);
 
        }
      }
    }
   // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
     int valeur = analogRead(A0);
    lcd.setCursor(0, 0);
    // print the number of seconds since reset:
    String affichage = "Flash :720/ " + String(nbFlash);
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
