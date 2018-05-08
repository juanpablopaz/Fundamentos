// 2vectores.cpp : Defines the entry point for the console application.
//hacer ordenar

#include "stdafx.h"
#include <iostream>
#include <string>
#include "conio.h"
#define MAX 100 

using namespace std;

void cargarvectorint (int n, int edad[]);
void cargarvectorstr (int n, string  nombre[]);
bool buscar (int n, string nombre[], string k );
void ordenar (int n, string nombre[], int edad[]);
void mostrarvectores (int n, string nombre [] , int edad[] );

void main () {
	int n , edad [MAX];
	string nombre [MAX], key;
	do {
		cout << "ingrese el numero  de elementos: " <<endl;
		cin >> n;
	}
	while ( (n>MAX) || (n<=0) ); {
		cargarvectorstr (n,nombre);
		cargarvectorint (n,edad);
		ordenar (n,nombre, edad);
		cout << "ingrese el nobre a buscar ";
		getline (cin , key );
		if (buscar (n,nombre,key) == false )
			cout <<" valor no encontrado " << endl ;
		else
			cout <<" la persona esta en la lista ";
		getch ();
	}
}

void ordenar (int n, string nombre[], int edad[] ) {
	
	string aux ; int x;
	for (int i=0; i< n-1 ; i++)
	{ 
		for ( int j=i+1; j<n ; j++)
		{ 
			if (nombre[i]>nombre[j])
			{
				aux= nombre [i];
				x= edad [i];
				edad [i]= edad[j];
				nombre[i]=nombre[j];
				nombre[j]=aux;
				edad [j]= x;
			}
		}
	}

}

void cargarvectorstr (int n, string nombre []){
	for ( int i=0; i<n; i++)
	{
		cout << "vector [" <<i<< "]=";
		getline (cin, nombre[i]);
	}
}

bool buscar (int n, string nombre [], string k) {
	int i;
	for (i=0; i<n; i++)
	{
		if (k== nombre [i])
		return (true);
		return (false);
	}
}


