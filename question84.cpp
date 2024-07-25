#include<iostream>
using namespace std;

// Use of structure.

struct point {
    int x=0;
    int y=1;

}p2;
int main(){
    // Construct two points (4,5) & (6,5)

    struct point p1 = {4,5};
    p2.x=6, p2.y=5;
    cout<<"Co-ordinates of 1st point are "<<p1.x<<", "<<p1.y<<endl;
    cout<<"Co-ordinates of 1st point are "<<p2.x<<", "<<p2.y<<endl;
    return 0;

    
}