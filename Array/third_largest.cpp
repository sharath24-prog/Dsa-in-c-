#include<iostream>
using namespace std;

int main(){

    int first = 0, second = 0, third = 0;

    int arr[] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++){

        if(arr[i] > first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second){
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third){
            third = arr[i];
        }
    }

    cout << "Third largest: " << third;

    return 0;
}