#include<iostream>
using namespace std;
int main(){

    int num , mul =1 , ans =0, rem ;

    cout<<"Emnter number =";
    cin>>num;

    while(num>0){

        rem = num % 8 ; 

        num/=8;

        ans = mul * rem + ans; 

        mul*=10;

    }

    int answer =0;
int reminder , multiple=1;
    while(ans > 0){

        

        reminder = ans % 2 ;

        ans/=2;

        answer = multiple * reminder + answer;

        multiple*=10;
    }

    cout<<answer;







    return 0;
}