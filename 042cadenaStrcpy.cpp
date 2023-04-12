//cipoar el contenido de una cadea a otra con la funcion strcpy()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){

   char nombre[]= "karla";
   char nombre2[20];
   
   strcpy(nombre2,nombre); //primero va la cadena vacia y luego la cadena con elementos
   
   cout<<nombre2<<endl; 






	getch();
	return 0;
}
