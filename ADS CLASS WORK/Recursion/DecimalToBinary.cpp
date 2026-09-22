#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n){
    if(n==0){
        return;
    }
    decimalToBinary(n/2);
    int value=n%2;
    cout<<value;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n==0){
        cout<<"0"<<endl;
    }
    else{
        decimalToBinary(n);
    }
    return 0;
}