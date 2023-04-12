//Matrices

#include<iostream>
#include<conio.h>

using namespace std;


int main (){
	
	int numeros[100][100]; // primero son las filas luego son las columnas en la matiz
	int filas, columnas;
	
	cout<<"Escriba el numero de filas: ";
	cin>>filas;
	cout<<"Escriba el numero de columnas: ";
	cin>>columnas;
	
	for(int i=0;i<filas;i++){ //estos dos for son bucles anidados
	for(int j=0;j<columnas;j++){
	
          cout<<"Escribe un numero: ["<<i<<"]["<<j<<"]: ";
          cin>>numeros[i][j];//aqui se almacenan los datos en la matriz
          
	}
	}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]; // asi se imprime una matriz
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
	
}
