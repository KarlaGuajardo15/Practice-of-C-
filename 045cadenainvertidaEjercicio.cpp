#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char palabra[100];
	char validez[100];
	
	cout<<"Escribe una palabra: ";
	cin.getline(palabra,100,'\n');
	
	strcpy(validez,palabra);
	strrev(validez);
	
	if(strcmp(palabra,validez)==0){
		cout<<"\n La palabra "<<palabra<<" es polindroma"<<endl;
		
	}else{
		cout<<"\n La palabra "<<palabra<<" No es polindroma"<<endl;
	}
	
	cout<<"\nPresione cualquier tecla para salir del programa ";
	
	
	getch();
	return 0;
}
