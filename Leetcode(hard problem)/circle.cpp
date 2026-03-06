#include<iostream>
using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B >> C;

    int ans = (C + A - 1) % B;

    if(ans == 0){
        ans = B;
    }

    cout << ans;

    return 0;
}