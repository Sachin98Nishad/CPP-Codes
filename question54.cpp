#include<iostream>
#include<algorithm>
using namespace std;
/*
Write a cpp program to find the smallest and second smallest element in the array.
*/
int main(){
    int n;
    cout<<"Please specify the count of terms(>=2)"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Please enter elements in the array(distinct elements)"<<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    cout<<"Smallest element is "<<arr[0]<<" && second smallest element is "<<arr[1]<<endl;
    return 0;
    }