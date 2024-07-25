#include<iostream>
using namespace std;

// Application of Array & Pointer.

int main(){
    int arr[] = {1,8,97,465,4557}; // Declaration && initialization.
    int *ptr = arr;  // &arr[0] both are same.
    cout<< arr <<endl;
    cout<< &arr[0]<<endl;
    cout<<"Accessing array elements using pointer "<<endl;
    for(int i=0; i<5; i++){
        cout<< *ptr++<<endl;

    }
    return 0;

}
