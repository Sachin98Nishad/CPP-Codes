#include<iostream>
#include<algorithm>
using namespace std;
/*
Find the mejority element in the array. A mejority element in an array arr[] of size n
is an element which is appeared in the array more than n/2 times.

*/
void findMajority(int arr[],int n){
    int maxCount = 0;
    int index = -1;    // store the index of mejority element.
    for (int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count > maxCount){
            maxCount = count;
            index=i;
        }
    }
    if(maxCount> n/2)
    cout<<arr[index]<<endl;
    else
    cout<<"There is no mejority element "<<endl;

    

}




int main(){
    int n;
    cout<<"Please enter the number of terms"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Please enter elements in the array"<<endl;
    for(int i=0; i<n; i++)cin>>arr[i];
    findMajority(arr, n);     // Function calling.
    return 0;

}