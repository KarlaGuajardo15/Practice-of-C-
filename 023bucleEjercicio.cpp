#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
      float tem, suma_tem=0, tem_med;
      float tem_alt=0, tem_baja=99;
      
      for(int i=0;i<24;i+=4){
	  
      cout<<"Escriba la temperatura: ";
      cin>>tem;
      
      suma_tem += tem;
      if(tem > tem_alt){
      	tem_alt=tem;
	  }
	  if(tem<tem_baja){
	  	tem_baja=tem;
	  	
  }
  }
	  
tem_med = suma_tem / 6; //Se divide en 6 por las temperaturas del dia
cout<<"\nLa temperatura alta del dia es: "<<tem_alt<<endl;
cout<<"\nLa temperatura baja del dia es: "<<tem_baja<<endl;
cout<<"\nLa temperatura media del dia es: "<<tem_med<<endl;

     getch();
	return 0;
}
