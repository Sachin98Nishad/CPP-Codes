#include<iostream>
#include<vector>
using namespace std;
/*
FInd largest and smallest elememts in the array.
*/
int main(){
    int n;
    cout<<"Please enter the number of terms in array "<<endl;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n; i++)cin>>v[i];
    int largest = v[0], smallest = v[0];
    for(int i=1;i<n;i++){
        if(v[i]<smallest)smallest=v[i];
        if(v[i]>largest)largest=v[i];
    }
    cout<<"Largest element is "<<largest<<" && smallest element is "<<smallest<<endl;
    return 0;

    
}