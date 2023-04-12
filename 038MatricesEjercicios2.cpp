#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int tabla1[3][3] = {{1,2,3},{4,6,4},{5,6,7}};
	int tabla2[3][3] = {{2,3,4},{5,6,7},{1,3,5}};
	
	cout<<"tabla1\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<tabla1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\ntabla2\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<tabla2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nSuma de las matrices\n";
	for(int i=0;i<3;i++){
		for(int j=0; j<3;j++){
			cout<<tabla1[i][j]+tabla2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
