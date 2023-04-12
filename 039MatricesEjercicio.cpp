#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main (){
	
	int A[3][3] = {{1,2,3},{2,-3,-6},{3,2,3}};
	int B[3][3] = {{1,2,2},{2,4,6},{-1,-3,3}};
	int C[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			C[i][j]=0;
			for(int k=0;k<3;k++){
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
			
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}

