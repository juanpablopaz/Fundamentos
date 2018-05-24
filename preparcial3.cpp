// preparcial3.cpp : Defines the entry point for the console application.
//ejercicio numero 2

#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include "math.h"
#define MAX 50

using namespace std;

void mostrar (float serie[], int n) ; 
float suma (float b, int n, int k);
float base (float b int n, float x, int k, float serie[]);

void main () {
	int n, k ; 
		float b, x=0, serie[MAX], h ;
		cout << " ingrese la base " << endl ;
		cin >> b ;
		cout << " ingrese la cantidad de terminos " << endl;
		cin >> n;
		k=1;
		base (b,n,x,k,serie);
		h=suma (b,n,k);
		cout << " la suma es = " << h << endl;
		mostrar (serie, n);
		getch ();
}

float suma ( float b, int n, int k ) {
	float s=0;
	for (int i=0; i<=n; i++)
		s=s+ (pow (b,i)*(k));
	k=k*-1;
	return s;
}

float base ( float b, int n, float x, int k, float serie[] ) {
	for (int i=0 ; i <=n ; i++){
		x=( pow (b,i))*k;
		for (int j=0 ; j<=n ; j++)
		serie[j]=x;
	k=k*-1;
	}
}

void mostrar ( float serie[] , int n) {
	for (int j=0;j<=n;j++)
		cout << " vector [" << j << "]= " << serie[j] << endl;
}
	