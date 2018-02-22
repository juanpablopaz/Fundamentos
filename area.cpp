// area1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main () 
{
	float area, base, altura;
	cout << "ingrese base";
	cin >> base;
	cout << "ingrese altura";
	cin >> altura;
	area= (base*altura)/2;
	cout << "el area es " << area << endl;
	getch ();
	
}

