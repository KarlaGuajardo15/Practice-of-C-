//Pasar una palabra a minusculas con la funcion strlwr()


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char palabra[]="YUKIO";
	
	strlwr(palabra);
	
	cout<<palabra<<endl;
	
	
	getch();
	return 0;
}
