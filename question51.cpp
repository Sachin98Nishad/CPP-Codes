#include<iostream>
using namespace std;
/*
Write a programme to convert "123" to an interger 123. 
*/
int main(){
    string str;
    cin>>str;
    int i=0, num=0;
    while(str[i]!='\0'){
        num=num*10 + (str[i]-'0');
        i++;
    }
    cout<<num<<endl;
    

}