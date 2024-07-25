#include<iostream>
using namespace std;

// Parameter passing technique (Pass by reference).

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n1, n2;
    cin>>n1>>n2;
    cout<<"Values before swapping are "<<n1<<" and "<<n2<<endl;
    swap(&n1, &n2);
    cout<<"Values after swapping are "<<n1<<" & "<<n2<<endl;
    return 0;
}