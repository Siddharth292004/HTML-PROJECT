#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    if((n%5==0 || n%3==0)&&(n%15!=0)){
        cout<<"THE NUMBER IS DIVISIBLE BY 3 OR 5 BUT NOT BY 15";
    }
    else{
        cout<<"THE NUMBER IS NOT DIVISIBLE BY 3 OR 5";
    }
}