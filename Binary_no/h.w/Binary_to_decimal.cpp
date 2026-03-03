#include<iostream>
using namespace std;
 int main(){

    int num , rem ,ans =0;

    cout<<"Enter number =";
    cin>>num;

    for(int mul = 1 ;num>0 ;mul*=2){

        rem = num % 10 ;

        num/=10 ;

        ans = rem * mul +ans;

    }

    cout<<ans;




    return 0;
 }