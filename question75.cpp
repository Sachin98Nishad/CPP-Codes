#include<iostream>
using namespace std;

// 2D Array.

int main(){
    int arr[2][3] = {12,35,97,155,675,15};
    cout<<"Printing 2D alements of array "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    
