#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int n, suma=0;
	
	cout<<"Escrine los numeros: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		suma += i; // i aumentara su valor hasta llegar a n
		
		
	}
	
	cout<<"La suma es: "<<suma<<endl;
	
	getch();
	return 1;
}
