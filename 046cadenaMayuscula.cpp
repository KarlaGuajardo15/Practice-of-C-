//pasar una palabra a MAYUSCULAS con la funcion strupr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	
	char palabra []= "Yukio";
	
	
	strupr(palabra);
	
	cout<<palabra<<endl;
	
	
	
	getch();
	return 0;
}
