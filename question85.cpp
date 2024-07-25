 #include<iostream>
 using namespace std;

 //  Array of Structure.

 struct point{
    int x, y;

 };
 int main(){
    // create an array of strutures.
    point arr[3];
    // Access array members.
    for(int i=0; i<3; i++){
        arr[i].x=i;
        arr[i].y=i+1;
        cout<<arr[i].x<<","<<arr[i].y<<endl;


    }
    return 0;

 }