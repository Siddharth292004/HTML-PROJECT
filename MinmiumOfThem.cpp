
 //* This program compares three integers and determines which one is the greatest.
#include<iostream>
using namespace std;


int main (){
    int a, b, c; 

    cout << "ENTER THE NUMBER A: " << endl;
    cin >> a;
    cout << "ENTER THE NUMBER B: " << endl;
    cin >> b;
    cout << "ENTER THE NUMBER C: " << endl;
    cin >> c;

    // Compare the numbers and print the greatest one
    if(a < b && a <c){
        cout << "THE A NUMBER IS MINIMUM : " << a;
    }
    else if(b < a && a < c){
        cout << "THE B NUMBER IS MINIMUM : " << b;
    }
    else if(a == b && b == c){
        cout << "ALL NUMBER ARE SAME ";
    }
    else{
        cout << "THE C NUMBER IS MINIMUM : " << c;
    }
    return 0;
}