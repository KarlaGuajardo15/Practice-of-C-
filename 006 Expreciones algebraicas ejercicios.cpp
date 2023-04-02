#include<iostream>

using namespace std;

int main (){
	
	float a,b,c,d, resultado = 0;
	
	cout<<"Escribe el numero a: "; cin>>a;
	cout<<"Escribe el numero b: "; cin>>b;
	cout<<"Escribe el numero c: "; cin>>c;
	cout<<"Escribe el numero d; "; cin>>d;
	
	resultado = a + (b/(c-d));
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl; 
	return 0;
}
