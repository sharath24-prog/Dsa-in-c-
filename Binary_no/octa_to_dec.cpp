#include<iostream>
using namespace std;
int main(){

    int num ;

    cout<<"Enter number =";
    cin>>num;

    while(num>0){
       
    

        

        int rem , mul = 1 , ans = 0 ;

        while(num>0){

            rem = num % 10;

            num/=10;

            ans = mul*rem + ans ;

            mul*=8;
        }

        cout<<ans;






    }



    return 0;
}