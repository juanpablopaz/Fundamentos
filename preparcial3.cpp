// preparcial3.cpp : Defines the entry point for the console application.
//ejercicio numero 3

#include "stdafx.h"
#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include "math.h"
#define MAX 50

using namespace std;

void mostrar ( int mat[MAX][MAX] , int n, int m) ;
void cargar ( int mat[MAX][MAX] , int n, int m) ;
void vector ( int mat[MAX][MAX], int n, int m, int vect[MAX] );

void main () {
    int mat [MAX][MAX] , vect[MAX]  n ,m ;
    cout << " ingrese el numero de filas " << endl;
    cin >> n ;
    cout << " ingrese el numero de columnas " << endl;
    cin >> m ;
    cargar (mat, n, m);
	vector (mar, n, m );
	mostrar (mat,n,m) ;

	getch () ;

}

void cargar (int mat[MAX][MAX] , int n, int m ) {
    for ( int i=0;i<m;i++)
        for ( int j=0;j<n;j++){
            cout << "mat [" <<i<< "][" <<j<< "]=" ;
            cin >> mat[i][j];
        }
}

void vector ( int [MAX][MAX], int n, int m, int vect[MAX] ) {
	 for ( int i=0;i<m;i++)
        for ( int j=0;j<n;j++){
			vect[i]= mat[i]*[j] ;
		}
}

void mostrar ( int mat[MAX][MAX] , int n, int m, vect[MAX] ) {
	for (int i=0 ; i <m ; i++)
		for ( int j=0; i<n ; i++)
			cout << "matriz [" <<i << "," << j << "]= " << mat [i][j] << endl << "multiplicacion =" << vect[i] <<endl;
