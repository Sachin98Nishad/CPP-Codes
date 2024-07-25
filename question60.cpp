#include<iostream>
using namespace std;
/*
Program to demotrate encapsulation in c++. 
*/
class temp{
    int a;
    int b;
    public:
    int solve(int input){
        a=input;
        b=a/2;

    }

};
int main(){
    int n;
    cin>>n;
    temp half;
    int ans = half.solve(n);
    cout<<ans<<endl;
    return 0;

}