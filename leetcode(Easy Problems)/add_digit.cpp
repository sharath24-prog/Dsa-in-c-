#include<iostream>
using namespace std;
int main(){

    int num ;

    cout<<"Enter your number= ";
    cin>>num;

    int rem , mul=1, ans=0  ; 


    while(num>=10){

    while(num>0){

        rem = num % 10;

        num /=10;

        ans = mul* rem + ans;

    }

    num = ans ;


    }
    cout<<ans;
    return 0;
}