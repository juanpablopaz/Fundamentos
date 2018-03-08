// ecuacion-cuadratica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;


void main ()
{
	float d, k, x, z, a, b, c, h ;
	cout << "ingresar las variables a, b, c " << endl;
	cin >> a >> b >> c ;
	x= (b*b)-(4*a*c);
	
	if (x>0) {
		d=(-b-sqrt(x))/(a*2);
		k=(-b+sqrt(x))/(a*2);
		cout << "la solucion real es x1: " << k << endl;
		cout << "la solucion real es x2: " << d << endl;
		
	}
		if ( x==0){
			k=(-b+sqrt(x))/(a*2);
			cout<< "la solucion es unica : " << k << endl;
			
		}
		if (x<0) {
			z=x*-1;
			k=(sqrt(z))/(a*2);
			d=(sqrt(z))/(a*2);
			h= (-b/(a*2));
			cout << "la raiz imaginaria x1 es : " << h << cout<< "+" << k <<cout << "i"<< endl ;
			cout << "la raiz imaginaria x2 es : " << h << cout << "-" << d <<cout << "i"<< endl ;
		}

			getch () ;


}

