#include<iostream>
using namespace std;

/*
Write a program to reverse a number using loops.


*/
int main() {

int number, reverse=0,num;
cout<<"Enter the number:"<<endl;
cin>>number;
num=number;
while(number!=0)
{
    reverse = reverse*10 + (number%10);
     number = number/10;
}
cout<<"The Reverse Number is "<<num<<"is"<<reverse<<endl;



}
