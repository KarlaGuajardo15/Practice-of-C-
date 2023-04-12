#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int numero[100],n;
	
	cout<<"escriba el numero de elmentos: ";
	cin>>n;
	
	for(int i=0; i<n;i++){
		cout<<"Escribe el numero: ";
		cin>>numero[i]; //aqui se guardan los numeros del vector
	}
	
	//Este codigo es para mostrar los indices
	
	for(int i=0;i<n;i++){
		cout<<i<<" ->"<<numero[i]<<endl;
	}
	
	
	
	
	getch();
	return 0;
}
