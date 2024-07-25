#include<iostream>
using namespace std;
 // Array Traversal.

 int main(){
    int arr[5] = {45,64,856,585,3}; // Array declaration && initialization.
    arr[2] = 10;
    cout<<"Printing Elements of Array "<<endl;
    for(int i=0; i<5; i++)
    cout<<arr[i]<<" ";
    return 0;

 }