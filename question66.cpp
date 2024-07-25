#include<iostream>
using namespace std;

// Function call in c++.
int sum(int num1, int num2){
    return num1 + num2;  // return value
}
int main(){
    int num1, num2;
    int add = sum(num1, num2); // function call
    cout<<"Summation of "<<num1<<" and "<<num2<<" is "<<add<<endl;
    return 0;
}

