//fincio de cadenas strcmp() //tambien es para vr si una palabra es mayor a otra a nivel alfabetico

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char palabra1[] = "hola";
	char palabra2[] = "hola";
	
	if(strcmp(palabra1,palabra2)==0){ //esta funcion de strcmp es para comparar cadenas si se pone 0 es para ver si son iguales, si se pone 1 las palabras son diferentes
		cout<<"Ambas palabras son lo mismo"<<endl;
	}
	
	
	
	getch();
	return 0;
}
