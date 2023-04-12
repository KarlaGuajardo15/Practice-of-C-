#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	int examen1, examen2, examen3;
	int aprobacion_todos_examen =0, abrobar_un_examen =0, no_aprobo_examen=0; 
	
	for(int i=1;i<=5;i++){
		cout<<i<<"Escribir calificacion del primer examen: ";
		cin>>examen1;
		cout<<i<<"Escribir calificacion del segundo examen: ";
		cin>>examen2;
		cout<<i<<"Escribir calificacion del tercer examen: ";
		cin>>examen3;
		cout<<"\n";
		
		//Acontinuacion se examinara los datos ingresados 
		if((examen1>10)&&(examen2>10)&&(examen3>10)){
			aprobacion_todos_examen++;
			
		}
		if((examen1>10)||(examen2>10)||(examen3>10)){
			abrobar_un_examen++;
		}
		if((examen1<10)&&(examen2<10)&&(examen3>10)){
			no_aprobo_examen++;
		}
		
	}
	
	cout<<"\na) Aprobaron todos los examenes: "<<aprobacion_todos_examen;
	cout<<"\na) Aprobaro solo un examen: "<<abrobar_un_examen;
	cout<<"\na) Aprobaron solo el ultimo examen: "<<no_aprobo_examen;
	
	
	
	system("pause");
	return 0;
}

