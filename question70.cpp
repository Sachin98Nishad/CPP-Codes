#include<iostream>
using namespace std;

//Recursion in C++.

int nsum(int n){
    if (n == 0) return 0;
    int result = n + nsum(n-1);
    return result;
}
int main(){
    int n;
    cin>>n;
    int sum = nsum(n);
    cout<<"Sum of first n natural numbers is "<< sum <<endl;
    return 0;
}