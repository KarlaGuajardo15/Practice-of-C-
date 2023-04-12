//Programa para calcular la descomposicion de factores de primos de un numero entero
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	int numero;
	
	cout<<"Escrine un numero: ";
	cin>>numero;
	
	cout<<"\nSe descompondra en factores primos: ";
	for(int i=2;numero>1;i++){
	
	    while(numero%i==0){
	    	cout<<i<<" ";
	    	numero /= i;
		}
	}
	cout<<"\n";
	system("pause");
	return 0;
}
