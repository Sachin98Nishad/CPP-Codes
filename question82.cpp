#include<iostream>
#include<vector>
using namespace std;

// Iterating a vectors.
int main(){
vector<string>names;
string data;
bool choice;
cout<<"Do you want to enter data of student name ? 0---> No, 1---> Yes "<<endl;
cin>> choice;
while(choice){
    cout<<"Please enter the name without space, or can use _ "<<endl;
    cin>>data;
    names.push_back(data);
    cout<<"Do you want to enter the data of student name ? 0---> No, 1---> Yes"<<endl;
    cin>>choice;
}
int count = names.size();
for(int i =0; i<count; i++){ 
    cout<<names[i]<<endl;
}
// using interation
cout<< "using iteration..." <<endl;
for(auto i = names.begin(); i!= names.end(); i++)
{
    cout<<*i<<endl;
}
}