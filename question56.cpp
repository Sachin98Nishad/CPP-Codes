#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5,10);
    for(int i=0; i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
    v.insert(v.begin()+2,15);
    for(int i=0; i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;


}