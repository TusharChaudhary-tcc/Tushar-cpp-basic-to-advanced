#include <bits/stdc++.h>
using namespace std;

// Q. Write a code to print Decimal to Binary

// int DecToBinary(int num){
//     int ans=0; 
//     int p=1;
//     while(num>0){
//         int rem= num%2;
//         num /= 2;
        
//         ans+=(rem*p);
//         p*=10;
//     }
//     return ans;
    
// }

// int main() {
//     // int num=50;
//         for(int i=0; i<50; i++){
//              cout<<DecToBinary(i)<<endl;
//         }
// return 0;
// }


// Q. Write a code to print Binary to Decimal


int BinaryToDecimal(int binNum){
    int ans=0; 
    int pow=1;
    while(binNum>0){
        int rem= binNum%2;
        ans+=(rem*pow);
        
        binNum/=10;
        pow*=2;
    }
    return ans;
    
}

int main() {
    // int num=50;
    
        // for(int i=0; i<50; i++){
             cout<<BinaryToDecimal(1010)<<endl;
        // }

return 0;
}