#include<iostream>
#include<vector>
using namespace std;
/*
Write a c++ programme to sum of elements in an array.
take number of elements as input from keyboard.
*/
int main(){
    int n,sum=0;
    cout<<"Please specify the number of elements in array"<<endl;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n; i++){cin>>v[i]; sum+=v[i];}
    cout<<"Sum of elements is "<<sum<<endl;

}