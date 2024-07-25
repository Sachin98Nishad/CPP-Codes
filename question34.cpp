#include<iostream>
using namespace std;
/*
Write a Cpp program to find out the series of (1*1*1) + (2*2*2) + (3*3*3)....+ (n*n*n).

*/
int main(){
    int n;
    cout<<"Please enter number of terms"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    sum+=(i*i*i);
    cout<<sum<<endl;
    return 0;
    
}