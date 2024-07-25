#include<iostream>
using namespace std;

num=n;
/*
A positive integer entered through keyboard.Write a function to obtain the prime factors of this number.
Do this:
Without recusion
With recursion.

*/
void rec_factors(int n){
    if(n==1)return;
    rec_factors(n-1);
    if(num%n==0){
        if(prime(n)==1)
        cout<<n<<endl;
    }

}





int main(){
    int n;
    cout<<"Please enter the number"<<endl;
    cin>>n;
    num=n;
    rec_factors(n);
    return 0;

}