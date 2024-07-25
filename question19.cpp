#include <iostream>
using namespace std;
/*
Ritika's father is having a shop where discount 15% will be given if cost of purchesed items 
>1000. Ask user to Quantity. Suppose one unit will cost of 100.
Analyse properly and print the total cost of user.


*/

int main() {

    int item;
    cout<<"Please enter the count of items"<<endl;
    cin>>item;
   int price=item*100;
   if(price<=1000)cout<<price<<endl;
   else {
    price=price*0.85;
    cout<<price<<endl;

   }
   return 0;
   
}