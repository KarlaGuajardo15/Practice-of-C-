#include<iostream>

using namespace std;

int main (){
	
	int n;
	
	cout<<"Escribe un n: "<<n;
	cin>>n;
	
	if(n == 0){
		cout<<"El numero es cero "<<n<<endl;
	}else if (n > 0){
		cout<<"El numero es positivo: "<<n<<endl;
	}else{
		cout<<"El numero es negativo: "<<n<<endl;
	}
	
	
	return 0;
}
