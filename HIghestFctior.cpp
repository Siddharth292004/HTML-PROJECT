#include<iostream>
using namespace std;
 int main (){
    int n;
    cout<<"ENTER THE NUMNER : ";
    cin>>n;
    int f=1;
    for(int i=0;i<n;i++){
        if(n%i==0)  f=i;  cout<<f;
    }
 }