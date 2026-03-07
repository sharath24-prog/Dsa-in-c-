#include<iostream>
#include<climits>
using namespace std;
int main(){

    int ans = INT_MIN;
    int arr [] ={1,2,3,4,5};
    for(int i =0 ;i<5 ; i++){

        if(arr[i]>ans){

            ans=arr[i];
        }

        

    }

    cout<<ans;


    return 0;
}