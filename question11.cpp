#include<iostream>
using namespace std;
#include<math.h>
/*
If the value of an angleis input through keyboard,Write a program to print all Trigonometric ratios.

*/

int main() { 
    float degree, radin;
    float PI = 3.141592;
    cout<<"Please enter angle in degree"<<endl;
    cin>>degree;
    radin = degree * (PI / 180.0);
    cout<<"Sin("<<degree<<")"<<" = "<<sin(radin)<<endl;
    cout<<"Cos("<<degree<<")"<<" = "<<cos(radin)<<endl;
    cout<<"Tan("<<degree<<")"<<" = "<<tan(radin)<<endl;
    cout<<"Cosec("<<degree<<")"<<" = "<<1/sin(radin)<<endl;
    cout<<"Sec("<<degree<<")"<<" = "<<1/cos(radin)<<endl;
    cout<<"Cot("<<degree<<")"<<" = "<<1/tan(radin)<<endl;

    return 0;





}
