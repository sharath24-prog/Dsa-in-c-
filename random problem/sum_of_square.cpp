#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter your Number =";
  cin>>n;
  int sum =0;

 for(int i=1 ;i<=n ;i++){
    
     sum +=i*i;   //sum = 0+1=1
                 //sum = 1+4=5
                 //sum = 5+9=14
                 //sum = 14+16=30
                 //sum=30+25=55

                
    
  }

  cout<<sum;

  


    return 0;
}