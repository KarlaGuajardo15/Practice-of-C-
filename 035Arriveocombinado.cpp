#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	char letras1[]={'a','b','c','d','e'};
	char letras2[]={'f','g','h','i','j'};
	char letras3[10];
	
	for(int i=0;i<5;i++){ //copiando los elementos de letras1 a letras3
		letras3[i] = letras1[i];
	}
	
	for (int i=5;i<10;i++){ //copiando los elementos de letras2 a letras3
		letras3[i] = letras2[i-5];
	}
	
	for(int i=0;i<10;i++){ //mostrar el nuevo arreglo combinado con los dos anteriores
		cout<<letras3[i]<<endl; 	
	}
	
	
	
	getch();
	return 0;
}
