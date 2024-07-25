#include<iostream>
using namespace std;
#include<string.h>
string p;
/*
Reverse the given string using Recusion.
*/
string reverse(string str,int i,int j){
    while(i<j){
        char ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        i++,j--;

    }
    return str;
}
    void rec_reverse(string str,int i,int j){
        if (i==j)return;
        char ch=p[i];
        p[i]=p[j];
        p[j]=ch;
        rec_reverse(str,i+1,j-1); 
        }
        int main(){
            string str;
            getline(cin,str);
            int len=0;
            p=str;
            while(str[len]!='\0'){
                len++;
            }
            cout<<reverse(str,0,len-1)<<endl;
            rec_reverse(str,0,len-1);
            cout<<p<<endl;
            return 0;


        }


