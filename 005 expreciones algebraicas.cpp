#include<iostream>

using namespace std;

int main (){
	float a,b,resultado = 0;
	
	cout<<"Escribe el valor de a: "; cin>>a;
	cout<<"Escribe el valor de b: "; cin>>b;
	resultado = (a/b) +1; 
	//para sacar dos numero de la . decimal y redondea
	cout.precision(2);
	cout<<"\n El resultado es: "<<resultado<<endl;
	
	return 0;
}
