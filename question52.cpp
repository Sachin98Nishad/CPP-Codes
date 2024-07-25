#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
Check if two strings are anagrams.
An anagrams is a word or phrases formed by rearranging the letters of different words or phrases,
typically using all the original letters exactly once.
e.g. Silence, Listen.
*/
int length(string s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
    
}
int main(){
    string s1,s2;
    cout<<"Please output both the strings"<<endl;
    cin>>s1>>s2;
    // Mothod 1. Using sorting.
  /* sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2) cout<<"Both are anagram"<<endl;
    else
    cout<<"These are not anagram"<<endl;

    return 0;
    */
   //Method2. Using array.
   int count[26]={0};
   if(length(s1)!=length(s2))cout<<"String are not anagram"<<endl;
   else{
    int i=0;
    while(s1[i]!='\0'){
    count[s1[i]]++;
    count[s2[i]]--;
    i++;
    }
    int flag=0;
    for(int i=0; i=256; i++){
        if(count[i]!=0){
            flag=1;
            break;
        }
    }
   }
   return 0;
}
