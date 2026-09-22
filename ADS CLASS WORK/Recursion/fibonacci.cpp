#include <bits/stdc++.h>
using namespace std;

// int fibo(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     return fibo(n-1)+fibo(n-2);
// }

// int main(){
//     for(int i=1; i<=100; i++){
//         cout<<i<<". "<<fibo(i)<<endl;
//     }
// }


// Fibonacci using Vector
vector<int> dat(101);
int fibo(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else if(dat[n]==0){
        dat[n]=fibo(n-1)+fibo(n-2);
    }
    return dat[n];
}

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<i<<". "<<fibo(i)<<endl;
    }

}




//
// vector<int> dat(101);
// int fibo(int n, vector<int> &dat){
//     if(n==1){
//         return 0;
//     }
//     else if(n==2){
//         return 1;
//     }
//     else if(dat[n]==0){
//         dat[n]=fibo(n-1)+fibo(n-2);
//     }
//     return dat[n];
// }

// int main(){

//     int n;
//     cin>>n;

//     vector<int> dat[n];
//     for(int i=1; i<=n; i++){
//         cout<<i<<". "<<fibo(i, dat)<<endl;
//     }

// }