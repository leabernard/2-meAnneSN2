#include <QtCore/QCoreApplication>
#include <sstream>
#include <string>
#include <iostream>


using namespace std;

int main()
{
	istringstream nmea("$GPGGA,123519,4807.038,N,01131.324,E,1,08,0.9,545.4,M,46.9,M, , *42");
	string element;
	int n = 0;
	while (std::getline(nmea, element, ','))
	{

		n++;
		cout << "element" << n << ":" << element << '\n';
	}

	return 0;
}



