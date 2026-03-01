#include<iostream>
using namespace std;
int main(){

    int num ;

    cout<<"Enter your Number = ";
    cin>>num ;

    int rem ,ans = 0 , mul = 1;

    while(num>0){
        
        // reminder
        rem = num % 2 ;

        //quotient

        num/= 2 ;

        //ans
        ans = rem * mul + ans;  // 1*1 +0 =1
                                // 1*10 + 1 =11
                                // 

        //mul

        mul*=10;

    }

    cout<<ans;



    return 0;
}