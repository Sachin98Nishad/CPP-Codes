#include<iostream>
using namespace std;
/*
Write a cpp prgram to rotate an array by k places.
Take number of elements as input from user.
*/
void reverse(int arr[],int i,int j){
    int temp;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++,j--;
    }
}
int main(){
    int n,k;
    cout<<"Please enter the number of terms and places to rotate"<<endl;
    cin>>n>>k;
    int arr[n];
    k=k%n;
    cout<<"Please enter array terms"<<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
    return 0;

}