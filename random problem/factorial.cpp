// factorial number 

#include<iostream>
using namespace std;
int main()
{
    int fact = 1 ;

    int n;

    cout<<"Enter your Number=";
    cin>>n;

    for(int i =1 ;i<=n ; i++){
        
        fact*=i;

    }
        cout<<"Factorial are = "<< fact <<endl;
    
    return 0;
}