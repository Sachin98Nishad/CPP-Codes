#include<iostream>
using namespace std;
#include<math.h>
/*
Two numbers enters from the keyboard.
Write a cpp program to find the value of one number raised to the power
of anothor.

*/
int main(){
    int a,b,ans=1;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;
    for(int i=1;i<b;i++)
    ans = ans*a;
    cout<<"raised to the power "<<b<<": "<<endl;


    return 0;
}
