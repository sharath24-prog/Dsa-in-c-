#include<iostream>
using namespace std;
int main(){
    
    int num ;

    int rem , count =0;
    cout<<"Enter Decimal number = " ;
    cin>>num;

    if(num<0){
        return 0;
    }

    while(num>0){

        rem = num % 2 ;
        num/=2;

        if(rem == 1){
            count++;
        }
        
        
    }

    cout<<count;

    return 0;
}