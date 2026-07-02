#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.second < b.second){
        return true;
    }
    else if(a.second == b.second){
        if(a.first > a.second) return true;
    }

    return false;
}
int main(){
    // sort(a, a+n);
    // sort(v.begin(), v.end());

    // sort(a+2, a+4);

    // sort(a, a+n, greater<int>);           // Sorted in Descending Order

    int n=3;
    pair<int, int> arr[n]= {{1,2}, {2,1}, {4,1}};
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    //This is my way Sorting (meri marji jaise sort krna ho usi tarike se comp ko design krdo)
    sort(arr, arr+n, comp);                  // comp is self define function
    // {{4,1}, {2,1}, {1,2}}

    for(auto a: arr){
        cout<<a.first<<" "<<a.second<<endl;
    }
    cout<<endl;






    int num=7;
    int cnt= __builtin_popcount(num);          //Counts set bits (1s)   "8421"
    cout<<cnt<<endl;

    long long num1= 18273722229338;
    int cnt1= __builtin_popcountll(num1);
    cout<<cnt1<<endl;



cout<<endl<<endl;

    string s="123";

    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(), s.end()));              //It print all possible permutation
    cout<<endl;



    int n1=6;
    int arr1[n1]={2,4,5,7,9,1};
    int maxi= *max_element(arr1, arr1+n1);                   //TO find max element from an array

    cout<<maxi<<endl;

}