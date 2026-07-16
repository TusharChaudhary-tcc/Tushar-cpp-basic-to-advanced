#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int index=-1;
    int s=0, e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==target){
            index=mid;
            break;
        }
        else if(target < arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<index<<endl;




    //Short Method for binary search
    // bool result= binary_search(arr, arr+n, target);
    // cout<<result;

}