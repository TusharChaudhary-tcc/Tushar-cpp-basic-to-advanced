#include <bits/stdc++.h>
using namespace std;

// Function to reverse an array

int reverseArray(int arr[], int sz){
    int start=0, end=sz-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]= {1,3,4,5,6,7,8,9};
    int sz= 8;
    reverseArray(arr, sz);
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;
    return 0;
}