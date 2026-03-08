#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr []={1,2,3,4,5};  //second largest elemnt is 4.

    int ans=0;
    int num=0;

    for(int i = 0 ; i<=5 ;i++){
    
        if(arr[i]>ans){
            num=ans;
            ans=arr[i];

        }

        

    }

    cout<<num;


    


    return 0;
}