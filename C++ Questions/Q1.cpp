#include <bits/stdc++.h>
using namespace std;
int main(){

    // TO check prime number or not
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool isPrime = true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    if(isPrime==true){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }
    return 0;
}