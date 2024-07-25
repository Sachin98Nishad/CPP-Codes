#include<iostream>
using namespace std;

/*
Write a program to find out GCD of two numbers.
GCD is number which divides both the numbers.

*/

int main() {

    int a,b;
    cout<<"Please enter two numbers"<<endl;
    cin>>a>>b;
    if(a<=b) {
        // a is minmum
        for(int c=a;c>=1;c--)
        {
            if(a%c==0 && b%c==0){
                // c is answer
                cout<<c<<endl;
                break;
            }
        }

    }
    return 0;
}