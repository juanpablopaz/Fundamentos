// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"
#include "conio.h"
using namespace std;


void main ()
{
	int x, c, k, h, p;
	cout << "ingrese un numero entero " << endl;
	cin >> x;
	c=0;  k=0;
	while (x>0) {
		h=x%10;				// h es el digito
		x=x/10;				// x el proximo numero siguiente a calcular
		c=c+1;
		if (h>k) {
			k=h;
			p=c; }
	}
	cout << "El numero mayor es: " << k << endl ;
	cout << " La posicion es: " << p << endl;
	getch ();


}

