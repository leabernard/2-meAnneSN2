#include <QtCore/QCoreApplication>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{

	string tram_GGA[15];
	tram_GGA[0] = "type de trame";

	tram_GGA[2] = "latitude";
	tram_GGA[3] = "n = Nord, s= Sud";
	tram_GGA[4] = "longitude";
	tram_GGA[5] = "e = Est, W= Ouest";

	


	tram_GGA[13] = "";
	tram_GGA[14] = "checksum";
	istringstream nmea("$GPGGA,123519,4807.038,N,01131.324,E,1,08,0.9,545.4,M,46.9,M, , *42");
	string element;
	int n = 0;
	cout << "\t TRAME NMEA GPS" << endl;
	cout << "\t -----------------" << endl;
	while (std::getline(nmea, element, ','))
	{
		cout << ">" << n << ":" << element << "->" << tram_GGA[n] << endl;
		n++;

	}
	return 0;



}

