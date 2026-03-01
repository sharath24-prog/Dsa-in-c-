#include<iostream>
using namespace std;
int main(){

    // Prime no 

    // 2,3,4,5,6

    int n ;
    cout<<"Enter number=";

    cin>>n;

    if(n<2){

        cout<<"error";
        return 0;
    }


    for(int i = 2 ;i<n ; i++){
        if(n%i==0){
            cout<<"Not Prime";
            return 0;
        }
    }

      cout<<"prime";


    
        


    









    return 0;
}