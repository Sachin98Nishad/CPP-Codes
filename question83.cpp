#include<iostream>
#include<vector>
using namespace std;

// Element access in Vector.

int main(){
    vector<int>v1;
    for(int i =1; i<=10; i++){
        v1.push_back(i*10);
        cout<<v1[i-1]<<" ";

    }
    cout<<endl;
    cout<<"\n Reference operator[v]:v1[2] = "<<v1[2];
    cout<<"\n at : v1.at(4) = "<<v1.at(4);
    cout<<"\n front() : v1.front() =  "<<v1.front();
    cout<<"\n back() : v1.back() =  "<<v1.back();
    
    // Pointer to the first element.
    int *pos = v1.data();
    cout<<"\n The first element is "<<*pos;
    return 0;


}