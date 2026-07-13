#include <bits/stdc++.h>
using namespace std;

//Parameterised
// void sumOfNumbers(int i, int sum){
//     if(i<1){
//         cout<<sum<<endl;
//         return;
//     }
//     sumOfNumbers(i-1, sum+i);
// }
// int main(){
//     int i;
//     cin>>i;
//     int sum=0;
//     sumOfNumbers(i, sum);
// }


//Functional
int sum(int n){
    if(n==0){
        return 0;
    }
    return n + sum(n-1);
}
int main(){
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
}