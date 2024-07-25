#include<iostream>
using namespace std;
/*
Write a C++ program to find out greatest common divisor(GCD) of two numbers.

*/

int main(){
int a,b;
cout<<"Please enter two numbers"<<endl;
cin>>a>>b;
if(a<=b){
    // a is minimum.
for(int c=a;c>=1;c--){
if(a%c==0 && b%c==0){
    // c is answer.
    cout<<c<<endl;
    break;
    }
}
}
else{
    for(int c=b;c>=1;c--){
        if(a%c==0 && b%c==0){
            cout<<c<<endl;
            break;

        }
    }
}
return 0;
}
