#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char nombre[10];
	char nombre2[10];
	
	cout<<"Escribe tu nombre: ";
	cin.get(nombre,10,'\n');
	
	strcpy(nombre2,nombre);
	
	cout<<"Tu nombre es: "<<nombre2<<endl;
	
	
	
	getch();
	return 0;
}
