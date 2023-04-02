//
#include <iostream>
using namespace std;


int main(){
	
	int n1, n2, suma=0 , resta=0, multiplicacion=0, divicion=0;
	
	cout<<"Escribe un numero: "; cin >>n1;
	cout<<"Escribe otro numero: "; cin >>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	divicion = n1 / n2;
	cout<<"\nla Suma es: "<< suma<<endl;    //el  <<endl es para dejar un espacio 
	cout<<"\nla Resta es: "<< resta<<endl;
	cout<<"\nla multiplicacion es: "<< multiplicacion<<endl;
	cout<<"\nLa divicion es: "<< divicion<<endl;  
	return 0;
	
	
}
