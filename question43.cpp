#include<iostream>
using namespace std;
/*
Passing an array through pointer.
*/
void printarray(int arr[]){
    arr[0]=90;
    arr[3]=21;

}
int main(){
    int arr[]={54,89751,568715,257945,23497};
    printarray(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}