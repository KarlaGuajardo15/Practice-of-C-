#include<iostream>

using namespace std;

int main (){
	
	float cal1, cal2, cal3, cal4;
	int   media;
	
	cout<<"Escriba la calificacion 1: "; cin>>cal1;
	cout<<"Escriba la calificacion 2: "; cin>>cal2;
	cout<<"Escriba la calificacion 3: "; cin>>cal3;
	cout<<"Escriba la calificacion 4: "; cin>>cal4;
	
	media= (cal1 + cal2 + cal3 + cal4) / 4;
	
	cout<<"La media de los alumnos es: "<<media;
	
	
	
	return 0;
}
