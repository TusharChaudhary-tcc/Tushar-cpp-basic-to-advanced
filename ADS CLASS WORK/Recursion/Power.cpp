#include <bits/stdc++.h>
using namespace std;

int power(int a, int n){
    if(n==0){
        return 1;
    }
    else{
        return a*power(a, n-1);
    }
}
int main(){
    int a,n;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Enter power : ";
    cin>>n;
    int ans=power(a,n);

    cout<<ans<<endl;
}