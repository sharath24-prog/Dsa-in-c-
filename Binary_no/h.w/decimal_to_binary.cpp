#include<iostream>
using namespace std;
int main(){

    int num ;
    cout<<"Enter number =";
    cin>>num;

    int ans =0 , rem ;

    for(int mul = 1; num>0 ; mul*=10 ){


        rem = num % 2;

        num/=2;

        ans = rem * mul + ans;

    }

    cout<<ans;
    



    return 0;
}