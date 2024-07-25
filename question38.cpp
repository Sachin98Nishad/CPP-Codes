#include<iostream>
using namespace std;
/*
Write a program to produce following output.

*  *  *  1  *  *  *
*  *  2  3  4  *  *
*  5  6  7  8  9  *
0  1  3  5  8  5  7

*/

int main(){
    int i, j, k, count=0;
    // for loop for all the rows.
    for(i=1;i<=4;i++){
    // add left space for patter.
     for(j=1;j<=4;j++)
     {
        cout<<" ";
     }
     // add element after space

     for(k=1;k<=4;k++){
        cout<<count<<" ";
        count++;

     }
     cout<<endl;

    }
    return 0;
}