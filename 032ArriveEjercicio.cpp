#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	int numero []={1,2,3,4,5};
	int multiplicacion =1;
	
	
	for(int i=0;i<5;i++){
	multiplicacion *= numero[i];

	}
cout<<"La multiplicacion de los numeros es: "<<multiplicacion<<endl;

getch();
return 0;
		
}
