#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char cadena1 [30];
	char cadena2 [30];
	
	cout<<"Escribe una palabra: ";
	cin.getline(cadena1,30,'\n');
	
	cout<<"Escribe otra palabra: ";
	cin.getline(cadena2,30,'\n');
	
	strupr(cadena1);
	strupr(cadena2);
	
	if(strcmp(cadena1,cadena2)==0){
		cout<<"Las palabras "<<cadena1<< " y "<<cadena2<<" Son iguales"<<endl;
		
	}else{
		cout<<"Las palabras "<<cadena1<< " y "<<cadena2<<" Son Diferentes"<<endl;
	}
	
	
	getch();
	return 0;
}
