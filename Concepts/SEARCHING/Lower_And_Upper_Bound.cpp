#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    vector<int> vec;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        vec.push_back(arr[i]);
    }

    for(auto a:vec){
        cout<<a<<" ";
    }
    int target;
    cin>>target;


// Short Method for binary search
    bool result= binary_search(arr, arr+n, target);
    cout<<result<<endl;


//Concept of Lower Bound :-
    // If the element exist it gives the index and if not exist then it gives next index to its lower element 
    // Smallest index such that arr[index]>=x

    int index = lower_bound(arr, arr+n, target)-arr;
    cout<<"Lower Bound will be:- "<<index<<endl;

    // for vectors:
    int idx=lower_bound(vec.begin(), vec.end(), target)-vec.begin();
    cout<<"Lower Bound will be:- "<<idx<<endl;



//Concept of Upper Bound :- 
    // If the element exist or not it always give the next large index to that target value
    // smallest index such that arr[index] > x
    int idx1=upper_bound(arr, arr+n, target)- arr;
    cout<<"Upper Bound will be:- "<<idx1<<endl;



// Floor and Ceil in Sorted Array
    // Floor:- largest number in array <= x
    // Ceil:- Smallest number in array >= x          (It is Lower Bound)


    

}