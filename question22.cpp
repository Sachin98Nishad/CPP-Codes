#include<iostream>
using namespace std;

/*

Ask user to enter age, sex(M,F), Marital status (yes or no) and then using following rules
print the their places of  service.
if employee is female then she will work only in urban areas.
if employee is male and his age is between 20 to 40 then he may
work anywhare.
if employee is male and his age is between 40 to 60 then he work
only in urban area.
And any other input of age should print "ERROR".

*/

int main() {

    int age;
    char gender,marital_status;
    cout<<"Please enter age,gender && marital status"<<endl;
    cin>>age>>gender>>marital_status;
    if (gender=='F' || gender=='f')
    cout<<"you can work only in urban area"<<endl;
    else {//gender is male.
        if (age>=20 && age<=40)
        cout<<"You can work anywhere"<<endl;
        else if(age>=40 && age<=60)
        cout<<"You can work only in urban areas"<<endl;
        else 
        cout<<"EROOR"<<endl;
        return 0;
    }

}