#include<iostream>
using namespace std;

/*
Design the Grading system.

90-100 ---> EX
80-89  ---> A
70-79  ---> B
60-69  ---> C
50-59  ---> D
40-49  ---> E
0-39   ---> F

*/
int main()
 {

float marks;
cout<<"Please enter the marks"<<endl;
cin>> marks;
if(marks>=90 && marks<=100)cout<<"Congratulations you to EX grade"<<endl;
else if(marks>=80 && marks<90)cout<<"Congratulations you got A grade"<<endl;
else if(marks>=70 && marks<80)cout<<"Congratulations you got B grade"<<endl;
else if(marks>=60 && marks<70)cout<<"Congratulations you got C grade"<<endl;
else if(marks>=50 && marks<60)cout<<"Congratulations you got D grade"<<endl;
else if(marks>=40 && marks<50)cout<<"Congratulations you got E grade"<<endl;
else if(marks>=0 && marks<40)cout<<"Congratulations you got F grade"<<endl;
else cout<<"Sorry! You have to re-appear ,you got failed"<<endl;


 }