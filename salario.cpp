// calculo de salrio neto : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float S, X, Y, K;
	cout << "ingrese el salario :";
	cin >> S;
	X = S * 0.13;
	Y = S * 0.12;
	K = S - X - Y;
	cout << "el salario es " << K << endl;
	system("pause");

    return 0;
}

