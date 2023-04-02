#include<iostream>

using namespace std;

int main (){
	int n, d=5;
	
	cout<<"Digitaliza un numero: "; cin>>n;
	
	/*
	if(n == d){   //el == es igual el != es diferente  Estes es menos de <, menor o igual <= y este es mayor de >, mayor o igual >=
		cout<<"El numero es 5";
	}else{
		cout<<"El numero es diferente de 5";
	}
	*/
	
	if(n <= d){   //el == es igual el != es diferente  Estes es menos de <, y este es mayor de >
		cout<<"El numero es 5";
	}else{
		cout<<"El numero es diferente de 5";
	}

	
	return 0;
}
