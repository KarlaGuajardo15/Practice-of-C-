#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int numero[100], n,mayor=0;
	
	cout<<"Escribe el numero de elementos del elemento";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<" Escrine un numero: ";
		cin>>numero[i];
		
		if(numero[i]>mayor){
			mayor = numero[i];
		}
	}
	
	
	cout<<"El mayor numero del vector es "<<mayor<<endl;
	getch();
	return 0;
}
