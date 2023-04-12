#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int numero[5]={1,2,3,4,10};
	int suma=0,mayor=0;
	
	
	for(int i=0;i<5;i++){
		suma += numero[i];
		if(numero[i]>mayor){ //Con esto se determinara el numero mayor, ya que el unico numero que puede ser la suma de los demas es el numero mayor
		   mayor =numero[i];
		   
		}
	}
	
	if(mayor== suma-mayor){ //con esto se comprobara si el numero mayor es igual al mayor menos la suma.
	  cout<<"El numero "<<mayor<< " es la suma de los demas";
		
	}else{
		cout<<"No existe un numero que sea la suma de los demas ";
	}
	
	getch();
	return 0;
}
