// calculo de salrio neto : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
	float B, A, C, X ;
	cout << "ingrese b :";
	cin >> B;
	cout << "ingrese a";
	cin >> A;
	cout << "ingrese c";
	cin >> C;
	X= B*B-(4*A*C);
	cout << "el resultado es " << X << endl;
	getch () ;
}

