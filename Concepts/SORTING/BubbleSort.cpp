#include <bits/stdc++.h>
using namespace std;

int main(){
    // Input array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    // for(int i=0; i<n-1; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         if(arr[j]>arr[j+1]){
    //             // swap(arr[j], arr[j+1]);
    //             int temp= arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }

    // More optimized version : The bool swapped flag is the entire reason optimized bubble sort exists. Without it, best case is always O(n²).

    for(int i=0; i<n-1; i++){
        bool swapped = false; 
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break;
    }

    cout<<endl;
    // Print sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


// The human analogy: Two neighbors compare themselves. If left > right, they swap. Repeat until no swaps happen.
// COMPARE & SWAP adjacent
// N-1 passes, N-1 comparisons each
// Largest element "bubbles" to end each pass
// Push the max to the last by adjacent swap

// Time Complexity
// Best case:- O(n)
// Average case:- O(n^2)
// Worst case:- O(n^2)
// Stable:- Yes ✅