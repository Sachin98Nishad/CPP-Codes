#include<iostream>
using namespace std;
/*
Reverse words in the given string.
*/
void reverse(string &p, int i, int j){
    while(i<j){
        char ch=p[i];
        p[i]=p[j];
        p[j]=ch;
        i++,j--;
        }
}
int main(){
    string s;
    cout<<"Please enter the string"<<endl;
    getline(cin,s);
    int len=s.length();
    reverse(s,0,len-1);
    int j=0,i=0; // i for traversing && j maintains the 1st character.
    while(s[i]!='\0'){
        if(s[i]==' '){
            reverse(s,j,i-1);
            j=i+1;

        }
        i++;
    }
    return 0;
    
}