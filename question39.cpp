#include<iostream>
using namespace std;
/*
Write a recursive  program for to print all the permutations of a given string.
This function takes three parameters.
1. String
2. Start index of the string.
3. Ending index of the string.

*/
void permute(string& a, int l, int r)
{
    // Base case
    if(l==r)
    cout<< a <<endl;
    else {
        // permutation made
        for (int i=1; i<=r; i++){
        //Swaping done
        char ch=a[1];
        a[1]=a[i];
        a[i]=ch;
        //Recursion called.
        permute(a,l+1, r);
        //backtrack
        ch=a[1];
        a[1]=a[i];
        a[i]=ch;

        }
    }
}
int main()
{
    string str="ABC";
    int n = str.size();
    permute(str,0,n-1);
    return 0;


}
