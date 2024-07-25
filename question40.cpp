#include<iostream>
using namespace std;
/*
Printing the elements of array.
*/

int main(){
    int arr[5]={15,23,55,46,55};
    arr[3]=0;
    cout<<"Printing the elements of array"<<endl;
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;

}