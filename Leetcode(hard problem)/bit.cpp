#include<iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    int x = a ^ b;   // different bits

    int count = 0;

    while(x > 0) {
        if(x % 2 == 1) {
            count++;
        }
        x = x / 2;
    }

    cout << count;

    return 0;
}