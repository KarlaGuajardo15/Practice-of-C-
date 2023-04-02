#include<iostream>
#include<math.h>

using namespace std;

int main (){

float a,b,c,x1=0,x2=0;

cout<<"Ingresa valor de b: "; cin>>b;
cout<<"Ingresa valor de a: "; cin>>a;
cout<<"Ingresa valor de c: "; cin>>c;


x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);

cout<<"\ln El resultado positivo es: "<< x1<<endl;
cout<<"\ln El resultado negativo es: "<< x2;

return 0;
}
