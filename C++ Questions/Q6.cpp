#include <bits/stdc++.h>
using namespace std;
int main(){

    // Q6. Figure out how to find if a number is power of 2 without any loop.


    int n;
    cin>>n;
    if(n>0 && (n&(n-1))==0){
        cout<<"Power of 2."<<endl;
    }
    else{
        cout<<"Not a power of 2."<<endl;
    }
}