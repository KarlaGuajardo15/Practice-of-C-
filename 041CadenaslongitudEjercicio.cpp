#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char nombre[10];
	 int longitud=0;
	 
	cout<<"Escribe tu nombre: ";
	gets(nombre);
	
	longitud=strlen(nombre);
	
	if(longitud<=10){
		cout<<"La palabra es corta: "<<nombre<<endl;
		cout<<"Numero de letras: "<<longitud<<endl;
	}else{
		cout<<"La palabra es mayor"<<endl;
		cout<<"numero de letras: "<<longitud<<endl;
	}
	
	getch();
	return 0;
}
