#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter no = ";
    cin>>n;

    int prev_no_1 = 0;
    int prev_no_2 = 1;
    int fibo_no;

    if(n == 0){
        cout<<prev_no_1;
        return 0;
    }

    if(n == 1){
        cout<<prev_no_2;
        return 0;
    }

    for(int i = 2; i <= n; i++){
        fibo_no = prev_no_1 + prev_no_2;
        prev_no_1 = prev_no_2;
        prev_no_2 = fibo_no;
    }

    cout<<fibo_no;

    return 0;
}