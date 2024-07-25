#include <iostream>
using namespace std;
/* If a five digit number is input through keyboard, Write a programm to print all the digits.
(Hint: Use the modulo operator '%')
*/

int main() {

    int num,d1,d2,d3,d4,d5,number;
    cout<<"Enter five digit number:"<<endl;
    cin>>num;
    number=num;
    // Suppose number is i.e. 22652
    d5=num%10; //d5 is 2
    num=num/10; //2265
    cout<<"d5 is 2265"<<"and number is"<<num<<endl;
    d4=num%10; // d4 is 5
    num=num/10; // 226
    cout<<"d4 is 226"<<"and number is"<<num<<endl;
    d3=num%10; // d3 is 6
    num=num/10;// 22
    cout<<"d3 is 22"<<"and number is"<<num<<endl;
    d2=num%10; // d2 is 2
    num=num/10; // 2
    cout<<"d2 is 2"<<"and number is"<<num<<endl;
    d1=num%10; // d1 is 2
    num=num/10;//2
    cout<<"d1 is 0"<<"and number is"<<num<<endl;
    return 0;
}