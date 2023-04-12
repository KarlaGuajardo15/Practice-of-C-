#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int numero[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"Mostrar matriz completa\n";
	
	for(int i=0;i<3;i++ ){
		for(int j=0;j<3;j++){
			cout<<numero[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n\nMostrando diagonal principal de la matriz\n";
	      for(int i=0;i<3;i++){
	      	for(int j=0;j<3;j++){
	      		if(i==j){
	      			cout<<numero[i][j]<<endl;
				  }
			  }
		  }
	      
	getch();
	return 0;
}
