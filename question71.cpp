#include<iostream>
using namespace std;
// How pointer works in c++.

void pointer(){
    int val = 10;
    int *ptr;
    ptr = &val;
    cout<<"Value at ptr = "<<ptr<<endl;
    cout<<"Value at val = "<<val<<endl;
    cout<<"Value at *ptr = "<<*ptr<<endl;
}
int main(){
    pointer();
    return 0;

}
