//  13 decimal no it is converted into a octa .


  #include<iostream>
  using namespace std;
  int main(){

    int num ;

    cout<<"Enter number=";
    cin>>num;

    int mul=1 , ans = 0 , rem ;
   while(num>0){
    rem = num % 8 ;

    num/=8;

    ans = mul*rem + ans ;

    mul*=10;
   }

   cout<<ans;


    


    return 0;
  }