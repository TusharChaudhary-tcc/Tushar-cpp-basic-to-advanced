#include <bits/stdc++.h>
using namespace std;

// Parameterised
// void factorial(int i, int result){
//     if(i<1){
//         cout<<result<<endl;
//         return;
//     }
//     factorial(i-1, result*i);
// }
// int main(){
//     int i;
//     cin>>i;
//     int result=1;
//     factorial(i, result);

// }


//Functional
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n* factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}