#include<iostream>
using namespace std;
int main(){

    int num ;

    cout<<"Enter Number =";
    cin>>num;

    while(num%2==0){
        num/=2;
    }

    while(num%3==0){
        num/=3;
    }

    while(num%5==0){
        num/=5;
    }

    if(num==1){
        
        cout<<true;
    }

    else{
        cout<<false;
    }


    return 0;
}