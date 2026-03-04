#include<iostream>
#include<climits>
using namespace std;

int main(){

    int num;
    cout<<"Enter number = ";
    cin>>num;

    if(num < 0){
        cout<<"Invalid input";
        return 0;
    }

    int i = 1;

    while(i <= INT_MAX/i && i*i <= num){

        if(i*i == num){
            cout<<"Perfect Square, root = " << i;
            return 0;
        }

        i++;
    }

    cout<<"Not a Perfect Square";

    return 0;
}