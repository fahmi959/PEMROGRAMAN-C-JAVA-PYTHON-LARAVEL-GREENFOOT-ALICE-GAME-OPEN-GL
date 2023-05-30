#include<stdio.h>
#include <iostream>
 using namespace std;

int main(){
double A[3][3]={1,2,3,4,5,6,7,8,100};
int i,j;
double det;
double a,b,c;
 

cout<<"Matriks A = "<<"\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<A[i][j]<<" ";
}
cout<<"\n";
}
cout<<"\n";
//menghitung determinan
a=A[0][0];
b=A[0][1];
c=A[0][2];
double C1,C2,C3;
C1=A[1][1]*A[2][2]-A[1][2]*A[2][1];
C2=(A[1][0]*A[2][2]-A[2][0]*A[1][2])*-1;
C3=A[1][0]*A[2][1]-A[2][0]*A[1][1];
cout<<"C1="<<" "<<C1<<"\n";
cout<<"C2="<<" "<<C2<<"\n";
cout<<"C3="<<" "<<C3<<"\n";
det=a*C1+b*C2+c*C3;
cout<<"Determinan A = "<<" ";
cout<<det;
}