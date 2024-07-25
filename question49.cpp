#include<iostream>
using namespace std;
/*
Write a cpp program to add 2(3*3) matrices. Take matrices input from user.
*/

int main(){
    int mat1[3][3], mat2[3][3];
    cout<<"Please fill first 3*3 matrix"<<endl;
      for(int i=0;i<3; i++){
        for(int j=0;j<3; j++) cin>>mat1[i][j];
      }
      cout<<"Please fill second 3*3matrix"<<endl;
      for(int i=0;i<3; i++){
        for(int j=0;j<3; j++) cin>>mat2[i][j];
      }
      cout<<"Summation matrix is "<<endl;
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat1[i][j]+=mat2[i][j];
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
      }
      return 0;
}
    
