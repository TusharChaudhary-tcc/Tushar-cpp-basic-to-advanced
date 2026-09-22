#include <bits/stdc++.h>
using namespace std;

// Method 1
int GCD(int a, int b){
    if(a>b){
        return GCD(a-b, a);
    }
    else if(b>a){
        return GCD(a, b-a);
    }
    else if(a==b){
        return a;
    }
}

// Method 2

int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    int ans=GCD(a,b);

    cout<<ans<<endl;
}