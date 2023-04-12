#include<iostream>
#include<stdlib.h>
#include<time.h> //es para generar el numero aleatorio

using namespace std;

int main(){
	
	int numero, dato, contador=0;
	
	srand(time(NULL));  //Esto es para generar el numero aleatorio
	dato = 1 + rand()%(100);//en esta variable guardara el numero ramdom
	
	do{
		cout<<"escribe un numero: ";
		cin>>numero; 
		if(numero>dato){
			cout<<"\nEscribe un numero menor\n";
			
		}
		if(numero<dato){
			cout<<"\nEscrine un numero mayor\n";
			
		}
		contador++;
	}while(numero != dato);
		cout<<"\nFELICIDADES ADIVINASTE EL NUMERO\n";
		cout<<"\nNumero de intentos: "<<contador<<endl;
		
	system("pause");

	return 0;
	
}
