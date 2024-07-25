#include<iostream>
using namespace std;

// Use of Structure Pointer.

struct point{
    int x,y;

}p1;
int main(){
    p1 = {1,2};
    // p2 is a pointer to structure p1.
     point *p2=&p1;
     cout<<p2->x<<" "<<p2->y;
     return 0;
}