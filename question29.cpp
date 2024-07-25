#include<iostream>
using namespace std;
#include<math.h>
/*

Write C++ program to calculate series 1+(1+2)+(1+2+3)+-----(1+2+3+4+-------+n)

*/

int main() {
    int n;
    cout<<"Please the number of terms"<<endl;
    cin>>n;
    int sum=0,total=0;
    //total is grand total and sum is sum of terms
    for(int i=1; i<=n; i++)
    {
    sum=0;
    for(int j=1;j<=i;j++)
    {
        sum+=j;
    }
    total+=sum;
    }
    cout<<total<<endl;
       
}
