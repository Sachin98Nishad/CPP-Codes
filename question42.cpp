#include<iostream>
using namespace std;

int main(){
      
      //defining(declaration && initilization) an array.
    int arr[]={90,20,50,70,55}; 
    // Define a pointer.
    int *ptr=arr;    //&arr[0] both are same.
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<"Accessing array elements using pointers"<<endl;
    for(int i=0;i<5;i++){
        cout<<*ptr++<<endl;
    }

return 0;
}