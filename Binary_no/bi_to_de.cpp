#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter Your Number =";
    cin>>n;

    int mul =1 , ans =0 , rem;

    while(n>0){


        rem = n%10;
        n/=10;

        ans =  rem*mul + ans;

        mul *= 2;



    }

    cout<<ans;




    return 0;
}