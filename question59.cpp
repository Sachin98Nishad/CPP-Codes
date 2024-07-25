#include<iostream>
using namespace std;
/*
Create a user defind data type for complex number and 2 numbers.
*/

    typedef struct complex {
         float real;
         float imag;
         }complexNumber;
         complexNumber addComplexNumber(complex,complex);
         int main(){
            complexNumber num1,num2 , complexSum;
            cout<<"Enter real and imginary parts respectivily: "<<endl;
            cin>>num1.real >>num1.imag;
             cout<<"Enter real and imginary parts respectivily: "<<endl;
              cin>>num2.real >>num2.imag;
              complexSum = addComplexNumber(num1,num2);
              cout<<"Sum = "<<complexSum.real<<(complexSum.imag>0?" + ":" - ")<<complexSum.imag<<"i";
              return 0;
              }
              complexNumber addComplexNumber(complex num1,complex num2){
                complex temp;
                temp.real = num1.real + num2.real;
                temp.imag + num1.imag + num2.real;
                return (temp);
              }



