#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char nombre[10];
	char frase[] = "Hola que tal ";

	
	cout<<"Escribe tu nombre: ";
	cin.getline(nombre,10,'\n');
	
   strcat(frase,nombre);
	
	cout<<"\n"<<frase<<endl;
	
	getch();
	return 0;
}
