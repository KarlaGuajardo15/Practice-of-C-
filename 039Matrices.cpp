#include<iostream>
#include<conio.h>


using namespace std;

int main (){
	int numero[100][100], filas, columnas;
	char band='F';
	
	cout<<"Escribe el numero de filas: ";
	cin>>filas;
	cout<<"Escribe el numero de columnas: ";
	cin>>columnas;
		
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				cout<<"Escribe un numero ["<<i<<" ][ "<<j<<" ]: ";
				cin>>numero[i][j];
			}
		}
	if(filas==columnas){  //esto es para ver si la matriz es simetrica
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(numero[i][j] == numero[j][i]){ //Este condicional es para ver si la matriz es transpuesta
					band ='V';
				}
			}
		}
		
	 }
	 if(band == 'V'){
	 	cout<<"La matriz es simetrica";
	 	
	 }else{
	 	cout<<"La matriz no es simetrica";
	 }
		getch();
		return 0;
		
	}
	
	 
	
