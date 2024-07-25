#include<iostream>
using namespace std;
#include<math.h>

/*
Write a pragramm to recieve the cartesian co-ordinates (x,y)
of a point and convert them into polar co-ordinates.
Hint: r = sqrt (x2 + y2) and tan-1 ( y/x ).

*/

int main() {
int x,y, degree;
float r ,phi, p;
cout<<"Take co-ordinate (x,y):"<<endl;
cin>>x>>y;
// Calculate the value r.
r = sqrt(x*x + y*y);
//Calculate the value of phi
// for tan inverse we use atan(value)
phi = atan(y/x); // radian
//print polar co-ordinates on screen

cout<<"The polar co-ordinates of ("<<x<<","<<y<<")" <<" is ("<<r<<" , "<<phi<<")"<<endl;
//convert radian into degree
p = 3.141592;

degree = phi * (180/p);

cout<<"The polar co-ordinate in degree:("<<r<<", "<<degree<<")" <<endl;

return 0;




}