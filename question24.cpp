#include<iostream>
using namespace std;
#include<math.h>
/*

Write a program for armstrong numbers between 1 to 500.

*/
int main()
 {

    int num,tem,rem=0,sum=0;
    
    for(int i=1; i<=500; i++)
    {
    num=i;
    sum=0;

     while(num!=0)
    {
     rem = num%10;
     sum+= (rem*rem*rem);
     num = num%10;
     }
      if(sum == i)
     cout<<i<<endl;
}

return 0;
 cout<<"*"<<endl;
 }



