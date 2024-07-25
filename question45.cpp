#include<iostream>
using namespace std;

int main(){
    string s = "SACHIN KUMAR NISHAD";
     char *p = &s[0];
     while(*p!='\0'){
        cout<<*p;
        p++;
     }
     //cout<<endl;
     return 0;
}