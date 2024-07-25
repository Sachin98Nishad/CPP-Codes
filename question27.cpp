 #include<iostream>
 using namespace std;
 #include<math.h>

 /*
 TAke input from user and print the A.M,G.M,H.M 
 e.g:
 Arithmetic mean = (a+b+c+d+e)/5
 GM = 5th root of abcde
 HM = 5/[(1/a) + (1/b) + (1/c) + (1/d) + (1/e)]
 
 */

int main() {

    float num,am=0,gm=1,hm=0;
    int n;
    cout<<"Please enter the number of terms"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++) {
       cin>>num;
       am+=num;
       gm=gm*num;
       hm+=(1/num);
       }
       am=am/n;
       gm=pow(gm,(1.0/n));
       hm= n/hm;
       cout<<"Arithmetic mean  is"<<am<<endl;
       cout<<"Geometric mean is"<<gm<<endl;
       cout<<"Harmonic mean is"<<hm<<endl;
       return 0;


}