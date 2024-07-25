#include<iostream>
using namespace std;

/* If the marks obtain by a student in five different subjects are inputs through keyboard, write a program to find 
out the percentage marks obtained. Assume that the maximum marks that can be otained by a student in each subject
is 100. 
*/

int main() {
float s1,s2,s3,s4,s5,total;
cout<<"Please enter the subject marks"<<endl;
cin>>s1>>s2>>s3>>s4>>s5;
total=s1+s2+s3+s4+s5;
//Maximum marks are 5*100
cout<<"You scored"<<(total/500)*100<<"percentage"<<endl;
return 0;


}