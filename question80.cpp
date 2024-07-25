#include<iostream>
using namespace std;

// Application of String & Pointer.

int main(){
    string s = " SACHIN NISHAD CSE";
    char *p = &s[0];
     while(*p! = '\0'){
        cout<<*p;
        p++;
    }
    cout<<endl;
    return 0;
}   	