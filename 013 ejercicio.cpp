#include<iostream>

using namespace std;

int main (){
	int n1,n2,n3;
	
	cout<<"Escribe tres numeros: ";
	cin>>n1>>n2>>n3;
	
	if((n1>n2)&&(n1>n3)){
		cout<<"El numero mayor es el primero: "<<n1<<endl;
		
	}else if((n2>n1)&&(n2>n3)){
		
		cout<<"El numero mayor es el segundo: "<<n2<<endl;
	}
	
	else {
	cout<<"El numero mayor es el tercero: "<<n3<<endl;	
	
	}
	
	
	

	return 0;
}

/*
	if(n1>n2 && n1>n3){
		cout<<"El numero uno es mayor: "<<n1;
	}else if(n2>n3 && n2>n1){
		cout<<"El numero dos es mayor: "<<n2;
	}else if(n3>n1 && n3>n2){
		cout<<"El numero tres es mayor: "<<n3;
	}else{
		cout<<"Los tres numeros son iguales";
		
	}
*/
