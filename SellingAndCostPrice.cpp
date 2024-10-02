#include<iostream>
using namespace std;
int main(){
    float sell,cost,n;
    cout<<"ENTER THE COST  PRICE : ";
    cin>>cost;
    cout<<"ENTER THE SELL PRICE :";
    cin>>sell;
     n = sell - cost ;
     if( n > 0){
        cout <<"YOU ARE IN PROFIT : "<< n <<" RS"<< endl;
     }
     else if(n==0){
        cout<<"YOU ARE NOT IN PROFIT AND LOSS : "<<n<< " RS"<< endl;
     }
     else {
        cout << "YOU ARE IN LOSSES : " << n<<" RS" <<endl;
     }

}