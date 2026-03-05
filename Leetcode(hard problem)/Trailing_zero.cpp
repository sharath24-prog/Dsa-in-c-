#include<iostream>
using namespace std;

int main(){

    int num , fact = 1 , rem , count = 0;

    cout<<"Enter number = ";
    cin>>num;

    if(num < 0){
        return 0;
    }

    for(int i = 1 ; i <= num ; i++){
        fact *= i;
    }

    while(fact > 0){

        rem = fact % 10;

        if(rem == 0){
            count++;
        }

        fact = fact / 10;
    }

    cout<<"Trailing zeros = "<<count;

    return 0;
}