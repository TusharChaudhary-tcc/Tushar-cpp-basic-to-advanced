#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


// The human analogy: Pick the next unsorted element, then walk backwards and insert it where it fits.
// PICK & INSERT into place
// Always sorted ✅ (grows each pass)
// Best for nearly-sorted arrays → O(n)


// Time Complexity
// Best case:- O(n)
// Average case:- O(n^2)
// Worst case:- O(n^2)
// Stable:- Yes ✅