// ecua-cuadratica2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;


void main ()
{
	float d, k, x, z, a, b, c ;
	cout << "ingresar las variables a, b, c " << endl;
	cin >> a >> b >> c ;
	if ( a==0){
		cout << "a tiene que ser distinto a 0" << endl;
	}
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
			k=(-b+sqrt(z))/(a*2);
			d=(-b-sqrt(z))/(a*2);
			cout << "la raiz imaginaria x1 es : " << k <<cout << "+i"<< endl ;
			cout << "la raiz imaginaria x2 es : " << d <<cout << "+i"<< endl ;
		}

			getch () ;


}


