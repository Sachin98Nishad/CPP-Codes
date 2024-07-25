#include<iostream>
using namespace std;

// Use of Dynamic Memory allocation using New and Delete operator.


int main(){
    int *p = NULL;
    p = new int; // Alloating memory using New operator.
    *p = 30; // Store value at allocated add.
    cout<<"Value of p : "<<*p<<endl;
    float *r = new float(75.409);
    cout<<"Value of r : "<<*r<<endl;
    delete p;    // freed the allocated memory.
    delete r;    // freed the allocated memory.        
    return 0;

}