#include<iostream>
using namespace std;
/*
Write a cpp program to reverse an array.
Take number of elements as input from user.
*/
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
int n;
cout<<"Please enter the number of terms"<<endl;
cin>>n;
int arr[n],reverse[n];
cout<<"Please enter the terms in array"<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<"Elements in original array are"<<endl;
for(int i=0;i<n; i++){
    cout<<arr[i]<<" ";
     cout<<endl;
     for(int i=n-1,j=0;i>=0;i--,j++){
        reverse[j]=arr[i];
        cout<<reverse[j]<<" ";
     }
     return 0;
}
}