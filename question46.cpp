#include<iostream>
using namespace std;
/*
Write a cpp program to find the sum of elements stored in the array.
Take the number of elements as input from user.
*/
int main(){
    int n, sum=0;
    cout<<"Please enter the number of terms"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Please enter the terms in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;


}