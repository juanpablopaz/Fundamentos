// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	float pi, radio, area ;
	cout << "ingrese radio";
	cin >> radio;
	pi = 3.1416;
	area = pi * radio* radio;
	cout << "el area es:" << area << endl;
	system ("pause")
		;
    return 0;
}

