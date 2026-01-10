#include <bits/stdc++.h>
using namespace std;

// Function to perform linear search

int linearSearch(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
    int main() {
        int a[]= {1,3,5,7,5,9,5,13};
        // int n=sizeof(a);
        int n = 7;
        int goal= 50;
        cout<<linearSearch(a, n, goal)<<endl;
        return 0;
    }
