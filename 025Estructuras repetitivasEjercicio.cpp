#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	int n, suma=0;
	
	cout<<"Ingrese el numero: ";
	cin>>n;
	
	for(int i=1;i<=2*n-1;i+2){
		suma += i;
	}
	
	cout<<"La suma es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
