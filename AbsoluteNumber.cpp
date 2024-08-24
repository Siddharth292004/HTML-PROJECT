#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER : "<<endl;
    cin>>n;
    if(n>0){
        cout<<"THIS IS THE ABSOLUTE NUMBER : "<<n <<endl;
    }
    else{
         n = -n;
         cout<<"THIS IS h THE ABSOLUTE NUMBER : "<<n<<endl;
    }
}