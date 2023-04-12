#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int tabla [3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Escribe un numero: [ "<<i<<" ][ "<<j<<" ]: ";
			cin>>tabla[i][j];
		}
	}
	
	 cout<<"Matriz Original\n";
	 for(int i=0;i<3;i++){
	 	for(int j=0;j<3;j++){
	 		cout<<tabla[i][j];
		 }
		 cout<<"\n";
	 }
	
	cout<<"matris transpuesta: \n";
	     for(int i=0;i<3;i++){
	     	for(int j=0;j<3;j++){
	     		cout<<tabla[j][i];
			 }
			  cout<<"\n"; //salto de linea
		 }
	
	getch();
	return 0;
}
