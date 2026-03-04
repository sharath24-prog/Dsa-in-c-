#include<iostream>
#include<climits>
using namespace std;

int main(){

    int num;
    cout<<"Enter Number = ";
    cin>>num;

    if(num < 0){
        cout<<"Not Palindrome";
        return 0;
    }

    int x = num;
    int rem, ans = 0;

    while(num > 0){

        rem = num % 10;
        num /= 10;

        if(ans > INT_MAX/10 || 
           (ans == INT_MAX/10 && rem > 7)){  //why we use rem>7 reason is int : 2147483647  last digit 7.
                                               // ans == 214748364 and rem > 7 → overflow. 
            cout<<"Overflow";
            return 0;
        }

        ans = ans * 10 + rem;
    }

    if(x == ans)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}