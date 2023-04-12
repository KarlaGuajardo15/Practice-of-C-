#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char palabra1[10];
	char palabra2[10];
	
	cout<<"Escribe la palabra 1: ";
	gets(palabra1);
	cout<<"Escribe la palabra 2: ";
	gets(palabra2);
	
	if(strcmp(palabra1,palabra2) ==0){
		cout<<"Las palabras son iguales";
		
	}else if(strcmp(palabra1,palabra2) <0 ){
		cout<<"Las palabras son diferentes y "<<palabra1<<" esta primero alfabeticamente"<<endl;
	}else{
		cout<<"las palabras son diferentes y "<<palabra2<<" esta primero alfabeticamente"<<endl;
	}
	
	getch();
	return 0;
	
}
