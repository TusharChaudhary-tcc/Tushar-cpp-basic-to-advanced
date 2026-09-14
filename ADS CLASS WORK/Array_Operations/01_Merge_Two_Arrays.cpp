#include <bits/stdc++.h>
using namespace std;

vector<int> mergeArray(vector<int> arr1, vector<int> arr2, int n, int m){
    int i=0,j=0;
    vector<int> result;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }
        else{
            result.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        result.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main(){
    int n,m;
    cout<<"Size of Array1: ";
    cin>>n;
    cout<<"Size of Array2: ";
    cin>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout<<"Enter elements of Array1: ";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of Array2: ";
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    vector<int> result=mergeArray(arr1, arr2, n, m);

    for(auto a: result){
        cout<<a<<" ";
    }

}