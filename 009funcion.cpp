#include<iostream>
#include<math.h>

using namespace std;

int main (){
	
	float x,y, r=0;
	cout<<"escribe valor de x: "; cin>>x;
	cout<<"escribe valor de y: "; cin>>y;
	
	
	r=(sqrt(x) ) / (pow(y,2)-1);
	
	cout<<"El resultado es: "<<r;

	return 0;
	
}
