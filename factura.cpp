// calculo de salrio neto : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
	float S, X ;
	cout << "ingrese el monto de la factura :";
	cin >> S;
	X = S * 0.13;

	cout << "el impuesto es: " << X << endl;
	getch () ;
}

