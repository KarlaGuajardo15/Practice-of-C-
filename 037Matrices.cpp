#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int tabla1[2][2] = {{1,2},{3,4}};
	int tabla2[2][2];
	
	
	for(int i=0;i<2;i++){ //aqui se pasa el contenido de la tabla 1 a la tabla 2
		for(int j=0;j<2;j++){
			tabla2[i][j] = tabla1[i][j]; 
		}
	}
	  for(int i=0;i<2;i++){
	  	for(int j=0;j<2;j++){
	  		cout<<tabla2[i][j];
		  }
		  cout<<"\n";
	  }
	getch();
	return 0;
}
