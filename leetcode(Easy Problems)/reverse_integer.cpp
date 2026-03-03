#include<iostream>
#include<climits>
using namespace std;
int main(){

    int num ;
    cout<<"Enter Number =";
    cin>>num;

    int ans=0 ,  rem ;

    while(num!=0){
       
        rem = num % 10;

        num/=10;

        if(ans>INT_MAX/10 || ans<INT_MIN/10)
            return 0;
        
        ans = ans * 10 + rem;
        

    }

    cout<<ans;


    return 0;
}