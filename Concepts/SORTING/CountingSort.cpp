#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; 
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    int k=A[0];
    for(int i=0; i<n; i++){
        if(A[i]>k){                 //Max Element
            k=A[i];
        }
    }

    int B[k+1]={0};
    for(int i=0; i<n; i++){
        B[A[i]]++;                  //Counting Array
    }

    for(int i=1; i<=k; i++){
        B[i]+=B[i-1];
    }

    int C[n];
    for(int i=n-1; i>=0; i--){
        C[--B[A[i]]]=A[i];
    }

    for(int i=0; i<n; i++){
        cout<<C[i]<<" ";
    }

}