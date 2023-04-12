#include<iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;

int main (){
	
    int tabla1[100][100], filas, columnas;
	int tabla2[100][100], datos=0;
	
	cout<<"Escribe el numero de filas: ";
	cin>>filas;
	cout<<"Escribe el numero de columnas ";
	cin>>columnas;
	
	srand(time(NULL));
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			datos = 1+rand()%(100); //numeros aleatorios del 1 al 100
			tabla1[i][j] = datos;
		}
	}	
	
	for(int i=0;i<filas;i++){ // aqui se pasan los datos de tabla1 a la tabla2
		for(int j=0;j<columnas;j++){
			tabla2[i][j] = tabla1[i][j];
		}
	}
	
	 for(int i=0;i<filas;i++){
	 	for(int j=0;j<columnas;j++){
	 		cout<<tabla2[i][j]<<"  ";
	 		
		 }
		 cout<<"\n";
	 }
	
	
	system("pause");
	return 0;
}
