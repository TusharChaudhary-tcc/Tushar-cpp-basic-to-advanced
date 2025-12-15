#include <bits/stdc++.h>
using namespace std;

// Q. Write a code to print Decimal to Binary

int DecToBinary(int num){
    int ans=0; 
    int p=1;
    while(num>0){
        int rem= num%2;
        num /= 2;
        
        ans+=(rem*p);
        p*=10;
    }
    return ans;
    
}

int main() {
    // int num=50;
        for(int i=0; i<50; i++){
             cout<<DecToBinary(i)<<endl;
        }
return 0;
}
