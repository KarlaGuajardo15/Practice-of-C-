#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int numero[5], numero2[5];
	
	for(int i=0;i<5;i++){//Se tiene que solicitar los cinco numeros del primer arreglo
		cout<<i+1<<" .Escribe un numero: "; 
		cin>>numero[i];
	}
	
	for(int i=0;i<5;i++){ //Aqui se multiplicaran los numeros del arreglo por 2 
		numero2[i] = numero[i]*2;
	}
	
	cout<<"\nMostrando numeros multiplicados por 2: \n\n";
	
	for(int i=0;i<5;i++){
		cout<<numero2[i]<<endl;
	}
	
	getch();
	return 0;
}
