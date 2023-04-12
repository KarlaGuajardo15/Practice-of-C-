#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main (){
	
	int n, suma=0, elevacion =0;
	
	cout<<"Escriba un numero: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
	 elevacion = pow(2,i);
	 suma += elevacion;
	 		
		
	}
	
	cout<<"La suma de elevacion es: "<<suma<<endl;
	system("pause");
	return 0;
}
