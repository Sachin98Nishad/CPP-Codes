#include<iostream>
using namespace std;

int res=1, rec_res=1; // Global variable
void power(int a,int b) {
    for(int i=1; i<=b;i++) 
    res = res*a;
}
void rec_power(int a, int b)
{
if(b=0)return;
rec_res=rec_res*a;
rec_power(a, b-1);
}
/*

Write a function power (a, b), to calculate the value of a raised to b.
a*a*a*------(b times).
do this with recurion. 
*/
int main()
{
    int a, b;
    cin>>a>>b;
    power(a, b);
    rec_power(a, b);
    cout<<a<<"raised to the power"<<b<<"is"<<res<<endl;
    cout<<a<<"raised to the power"<<b<<"is"<<rec_res<<endl;
    return 0;
    
    }
