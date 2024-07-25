#include<iostream>
using namespace std;

/*
Any year through keyboard, Write a program to determine whether year is a leap year or not.

*/

int main() {

    int year;
    cout<<"Please enter the year"<<endl;
    cin>>year;
    
    if(year%4==0 && year%100==0) 
    

    cout<<"Year is leap year"<<endl;
    
    else if(year%400==0)
    cout<<"Year is leap year"<<endl;
    else
    cout<<"Year is not leap year"<<endl;

      return 0;
    }