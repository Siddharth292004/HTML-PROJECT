#include<iostream>
using namespace std;
int main(){
    int a=3,n;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a=a+3;
    }
}