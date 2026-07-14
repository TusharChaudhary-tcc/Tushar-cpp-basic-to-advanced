#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex=j;
            }
        }

        if(minIndex!=i){
            swap(arr[i], arr[minIndex]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


// The human analogy: Scan the whole unsorted part, find the minimum, and swap it to the correct position.
// FIND & PLACE minimum
// Only 1 swap per pass (efficient!)
// Minimum number of writes/swaps


// Time Complexity
// Best case:- O(n^2)
// Average case:- O(n^2)
// Worst case:- O(n^2)
// Stable:- No ❌