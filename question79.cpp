#include<iostream>
using namespace std;

// Passing string to a function.

void print_string(string s){
    cout<<"Passed string is: "<<s<<endl;
    return ;

}
int main(){
    string s;
    cout<<"Please enter string "<<endl;
    getline(cin,s);
    print_string(s);
    return 0;
}