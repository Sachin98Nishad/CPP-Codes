#include<iostream>
using namespace std;

/*
Printing Armstrong numbers.

*/

int main() {

    int num, rem=0, sum=0;

       for(int i=0; i<500; i++)
       {
        num=i;
        sum=0;
        while(num!=0)
        {
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(sum ==i)
        cout<<i<<endl;
       }
       return 0;
}