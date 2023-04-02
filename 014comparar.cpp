#include<iostream>

using namespace std;

int main (){
	
	int numero;
	
	cout<<"Escrine un numero: ";
	cin>>numero;
	
	if(numero==0){
			cout<<"El numero es 0: "<<numero;
		
		
	}else if(numero%2==0){
	cout<<"el numero es par: "<<numero;
	}
	
	
	else{
		cout<<"El numero es inpar: "<<numero;
	}
	return 0;
}
