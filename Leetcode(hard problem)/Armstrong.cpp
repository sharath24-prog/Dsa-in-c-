#include<iostream>
using namespace std;

int main(){

    int num, count = 0;

    cout << "Enter your Number = ";
    cin >> num;

    int original = num;
    int temp = num;

    // count digits
    while(temp > 0){
        count++;
        temp /= 10;
    }

    int ans = 0;

    while(num > 0){
        int rem = num % 10;
        num /= 10;

        int power = 1;

        for(int i = 0; i < count; i++){
            power = power * rem;
        }

        ans += power;
    }

    if(ans == original)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}