#include<iostream>
using namespace std;
/*
Write a recursive fuction to obtain the running sum of first 25 natural numbers.

*/
int sum=0;
void addition(int cnt){
    if(cnt>25)return;
    sum+=cnt;
    addition(cnt+1);
}
int main(){
    int cnt=0;
    addition(cnt);
    cout<<"Sum of first 25 natural numbers"<<endl;
    
}