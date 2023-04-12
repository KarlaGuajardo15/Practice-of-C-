#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int x,y,elevacion=0;
	
	
		cout<<"Ingrese el numero x: ";
		cin>>x;
		cout<<"Ingrese el numero Y: ";
		cin>>y;
	for(int i=1; i<=y;i++){
		elevacion*= x;
	}
	cout<<"\nEl resultado del la elevacion es: "<<elevacion<<endl;
getch();	
	return 0;
}
