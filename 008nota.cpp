#include<iostream>

using namespace std;

int main (){
	
	float p,t,par,final = 0;

	
	cout<<"Escriba el total de pracricas: "; cin>>p;
	cout<<"Escriba el total de teoria: "; cin>>t;
	cout<<"Escriba el total de participacion"; cin>>par;
	
	p*=0.30;
	t*=0.60;
	par*=0.10;
	
	final = p+t+par;
	
	cout<<"La nota final del alumno es: "<<final;
	
	return 0;
	
}
