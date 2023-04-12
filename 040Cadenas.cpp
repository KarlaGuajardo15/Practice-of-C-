//cadenas de caracteres pueden ser numeros, letras o simbolo

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char palabra[] = "Karla";
	char palabra2[] = {'K','a','r','l','a'};
	char nmombre[30];
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	
	//digitalizar al usuario su nombre
	
	cout<<"escribe su nombre: ";
	cin.getline(nombre,20,'\n'); //con ente codigo respeta los numeros de las cadenas de caracteres
	//gets(nombre); // aqui puede guardar toda la cadena pero no importa el numero asignado en la cadena 
	//cin>>nombre; // con esto no lo guardara de manera correcta
	
	
	cout<<nombre<<endl;
	
	getch();
    return 0;
}



