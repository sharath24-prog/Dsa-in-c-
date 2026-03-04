#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter Number = ";
    cin>>num;

    if(num < 1){
        cout<<"not done";
        return 0;
    }

    int i = 1;

    while(i < num){
        i = i * 2;
    }

    if(i == num){
        cout<<"done";
    }
    else{
        cout<<"not done";
    }

    return 0;
}