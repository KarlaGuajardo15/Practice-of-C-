//conectar una cadena con otra

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char cadena1[]="Esto es una cadena";
	char cadena2[]= " Ejemplo";
	char cadena3[30];
	
	
	strcpy(cadena3,cadena1); //cambia la cadena 3 lo de la cadena 1
    strcat(cadena3,cadena2); //con el comando strcat es para encadenar las dos cadenas
	
	cout<<cadena3<<endl;
	
	
	getch(); 
	return 0;
	
}
