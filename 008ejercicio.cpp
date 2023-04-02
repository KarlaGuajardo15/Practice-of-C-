#include<iostream>
#include<math.h>

using namespace std;

int main (){
	
	float a,b,c;
	
	cout<<"Escriba el cateto a: "; cin>>a;
	cout<<"Escriba el cateto b: "; cin>>b;
	
	c= sqrt(pow(a,2)+pow(b,2));   //el sqrt es la raiz y pow la potencia y el numero despues de la variable es la potencia

	cout<<"La hipotenusa es: "<<c;
	
	return 0;
	
}
