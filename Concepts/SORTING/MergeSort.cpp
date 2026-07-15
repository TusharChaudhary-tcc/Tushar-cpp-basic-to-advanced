#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low ,int mid, int high){
    vector<int> temp;
    int a=low, b=mid+1;
    while(a<=mid && b<=high){
        if(arr[a]<=arr[b]){
            temp.push_back(arr[a]);
            a++;
        }
        else{
            temp.push_back(arr[b]);
            b++;
        }
    }
    while(a<=mid){
        temp.push_back(arr[a]);
        a++;
    }
    while(b<=high){
        temp.push_back(arr[b]);
        b++;
    }

    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(arr, 0, n-1);

    for(auto a: arr){
        cout<<a<<" ";
    }

}



// Definition:
// - Merge Sort is a Divide and Conquer algorithm.
// - It divides the array into two halves, recursively sorts them,
//   and then merges the sorted halves.

// Steps:
// 1. Find the middle index.
// 2. Divide the array into left and right halves.
// 3. Recursively sort both halves.
// 4. Merge the two sorted halves.

// Time Complexity:
// - Best Case:    O(n log n)
// - Average Case: O(n log n)
// - Worst Case:   O(n log n)

// Space Complexity:
// - O(n) (uses a temporary array/vector)

// Stable:
// - Yes (maintains the relative order of equal elements)

// In-place:
// - No (requires extra memory)

// Recursive:
// - Yes

// Key Points:
// - Merge Sort works efficiently on large datasets.
// - Performance is independent of the initial order of elements.
// - Suitable for Linked Lists because merging is efficient.

// Drawbacks:
// - Requires extra O(n) space.
// - Recursive calls add function call overhead.
// 