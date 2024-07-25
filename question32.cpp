#include<iostream>
using namespace std;
/*
Write a C++ program to print su of n odd natural numbers.
*/

int main()
{   int terms;
    cout<<"Please Enter the number of terms"<<endl;
    cin>>terms;
    int sum=0;
    for(int i=1,count=1;count<=terms;count++,i+=2){
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"Sum of first "<<terms<<"Odd numbers is "<<sum<<endl;
    return 0;
}