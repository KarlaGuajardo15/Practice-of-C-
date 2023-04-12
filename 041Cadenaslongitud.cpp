//longitud de una cadena de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char palabra[] = "Hola nalita";
	int longitud=0;
	
	longitud = strlen(palabra);
	cout<<"El numero de elementos de la palabra es: "<<longitud<<endl;
	
	
	
	
	getch();
	return 0;
}
