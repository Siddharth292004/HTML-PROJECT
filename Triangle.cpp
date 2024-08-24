#include<iostream>
using namespace std;
int main(){
    int a , b , c ;
     cout<<"ENTER THE NUMBER A : ";
     cin>>a;
     cout<<"ENTER THE NUMBER B : ";
     cin>>b;
     cout<<"ENTER THE NUMBER C : ";
     cin>>c;
    if( (a+b)>c && (b+c)>a&& (a+c)>b){
        cout<<"THIS IS THE TRIANGLE ";
    }
    else{
        cout<<"THIS IS INVAILD TRIANGLE ";
    }

}