#include<iostream>

using namespace std;

int main (){
	
	int x,y,aux;
	cout<<"Escribe el numero x: "; cin>>x;
	cout<<"Escribe el numero y: "; cin>>y;
	
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"El numero nuevo de x: "<<x<<endl;
	cout<<"El numero nuevo de y: "<<y;
	
	return 0;
	
}
