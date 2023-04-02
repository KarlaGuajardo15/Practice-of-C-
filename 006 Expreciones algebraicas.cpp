#include <iostream>

using namespace std;

int main(){
	float a, b,c,d,e,f, resultado=0;
	
	cout<<"Digitalize numero a: "; cin>>a;
	cout<<"Digitalize numero b: "; cin>>b;
	cout<<"Digitalize numero c: "; cin>>c;
	cout<<"Digitalize numero d: "; cin>>d;
	cout<<"Digitalize numero e: "; cin>>e;
	cout<<"Dogotalize numero f: "; cin>>f;
	
	resultado = (a + (b/c))/ (d + (e/f));
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl; 
	
	return 0;
}
