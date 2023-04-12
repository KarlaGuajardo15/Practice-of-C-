#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	int n, mult=1;
	
	cout<<"Escribe el numero: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		mult *= i;
		
	}
	
	cout<<"La multiplicacion es: "<<mult<<endl;
	
	system("pause");
	return 0;
}
