#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number = ";
    cin>>n;

    if(n == 0){
        cout<<"Complement = 1";
        return 0;
    }

    int ans = 0;
    int mul = 1;

    while(n > 0){

        int rem = n % 2;   // last bit nikala
        rem = rem ^ 1;     // bit flip kiya

        ans = ans + rem * mul;

        mul = mul * 2;     // next place value
        n = n / 2;         // number reduce
    }

    cout<<"Complement = " << ans;

    return 0;
}