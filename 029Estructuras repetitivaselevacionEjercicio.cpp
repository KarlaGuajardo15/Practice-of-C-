#include<iostream>
#include<stdlib.h>


using namespace std;

int main (){
	
	int n, par, impar, negativo, suma=0;
	
	cout<<"ingrese el numero: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i%2==0){ //Los numero pares son negativos
		 negativo = i * -1; //Se cambia de signo
		 par += i;
		
		}else{ // Los impares son positivos
			impar += i;
			
			}
	  }
	
	suma = par + impar;
	cout<<"\n la suma es: "<<suma<<endl;
	system("pause");
	return 0;
}
