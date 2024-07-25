#include <iostream>
using namespace std;
#include<math.h>
/*

Write a program to recieve value of an angle in degrees and check whether sum 
of squares of sine and cosine of this angle is equal to 1.


*/

int main()
{
    int degree, result;
    cout<<"Please enter degree of angle:"<<endl;
    cin>>degree;
    result= (sin(degree)*sin(degree) + cos(degree)*cos(degree) );
    if(result==1)cout<<"Yes"<<degree<<"Satisfies the condition"<<endl;
    else cout<<"No it does not satisfy the condition"<<endl;

    return 0;


}