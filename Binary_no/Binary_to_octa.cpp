


// Binary to decimal 


#include<iostream>
using namespace std;
int main(){


    int num;
    cout<<"Enter Your number =";
    cin>>num;

        int rem , ans =0 , mul = 1;
        

    while(num>0){
        

        rem = num % 10;
        num/=10;

        ans = mul*rem + ans ;

        mul*=2;
    }

        // Decimal to octa

        int multi =1;

        int answer=0;
        int remi;

    while(ans>0){

        
        remi = ans % 8;

        ans /= 8;

        answer = multi * remi + answer ;

        multi*=10;



    }

    cout<<answer;

    
     


    return 0;
}