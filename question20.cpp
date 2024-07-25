#include<iostream>
using namespace std;
/*
Write a program to check a triangle is valid or not.
sum of angles of triangle is 180 degree.

*/

int main() {

    int a,b,c,sum;

    cout<<"Enter three angles of triangle:"<<endl;
    cin>>a>>b>>c;
    sum=a+b+c;
    if (sum==180)
       cout<<"Triangle is valid"<<endl;
       else
       cout<<"Triangle is not valid"<<endl;
       return 0;
       
       }