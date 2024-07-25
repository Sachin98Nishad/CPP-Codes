#include<bits/stdc++.h>
using namespace std;

/*
Use of Public inheritence.
*/
class parent{
    private:
    int child=2;  // count the number of children.
    protected:
    int age_father=50;
    public:
    int age_mother=48;

};
class children:public parent{
    void func(){
        cout<<age_father<<endl;
    }

};
int main(){
children c1;
cout<<c<<endl;
return 0;
}