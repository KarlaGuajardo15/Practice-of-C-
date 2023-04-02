#include<iostream>

using namespace std;

int main (){
	int saldo_inicial= 1000, opc;
	float ingreso, saldo =0, retiro;
	
	cout<<"\t bienvenido a su cajero virtual"<<endl;
	cout<<"1. Ingresar dinero en cuenta";
	cout<<"2. Retirar dinero en cuenta";
	cout<<"3. Salir";
	cout<<"Opcion";
	cin>>opc;
	
	switch(opc){
		case 1: 
		 cout<<"Engrese dinero: ";
		 cin>>ingreso;
		 saldo = saldo_inicial+ingreso;
		 cout<<"Saldo actual: "<<saldo;break;
		case 2:
			cout<<"cuanto va a retirar";
			cin>>retiro;
			if(retiro >= saldo){
				cout<<"No tiene esa catidad";
			
			}else{
			saldo = saldo_inicial-retiro;
			cout<<"Dinero en Cuenta: "<<saldo;	
			}
			
			case 3: break;
			
		
	}
	
	return 0;
}
