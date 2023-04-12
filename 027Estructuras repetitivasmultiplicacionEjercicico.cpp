#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	int n, suma=0, factorial=1;
	
	cout<<"ingrese un numero: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial *= i;
		suma += factorial;
	}
	
	cout<<"La suma de los factoriales es: "<<suma<<endl;
	system("pause");
	return 0;
}
