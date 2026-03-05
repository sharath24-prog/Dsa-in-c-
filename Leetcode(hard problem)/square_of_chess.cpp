#include<iostream>
using namespace std;
int main(){


   int num ;
   int sum =0 ;

   cout<<"Enter NUmber =";
   cin>>num;

   for(int i =1 ; i<=num ; i++){
    
    sum+= i* i;
   }

   cout<<"square are ="<<sum;


    return 0;
}