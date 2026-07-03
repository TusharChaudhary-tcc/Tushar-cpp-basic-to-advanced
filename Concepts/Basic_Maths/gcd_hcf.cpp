#include <bits/stdc++.h>
using namespace std;

int main(){
    // GCD and HCF mean the same thing.
    // GCD :- Greatest Common Divisor
    // HCF :- Highest Common Factor

    // int n1,n2;
    // cin>>n1>>n2;

// Method 1
    // int gcd=1;
    // for(int i=1; i<=min(n1,n2); i++){
    //     if(n1%i==0 && n2%i==0){
    //         gcd=i;
    //     }
    // }

//Method 2
    // for(int i=min(n1,n2); i>=1; i--){
    //     if(n1%i==0 && n2%i==0){
    //         gcd=i;
    //         break;
    //     }
    // }
    // cout<<gcd<<endl;


// Method 3 (Best): Euclidean Algorithm
    //  gcd(n1, n2)= gcd(n1-n2, n2);

    int a,b;
    cin>>a>>b;

//1. Modulo Method (Euclidean Algorithm)
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0) cout<<b;
    else cout<<a;

//2. Subtraction Method
    while(a != b){
    if(a > b)
        a = a - b;
    else
        b = b - a;
    }
    cout<<a;

//3.
    while(b != 0){
    int rem = a % b;
    a = b;
    b = rem;
    }
    cout << a;



}