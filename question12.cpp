#include<iostream>
using namespace std;
/*
Two numbers are inputs from keyboard into two locations C and D.
Write a program to interchange contents of C and D.

*/

int main()
{
int C=20 , D=30 ,T;
cout<<"Enter the value of C "<<endl;
cin>>C;
cout<<"Enter the value of D "<<endl;
cin>>D;
T = C;
C = D;
D = T;

cout<<"The value of C"<<endl;
cout<<"The value of D"<<endl;


}
