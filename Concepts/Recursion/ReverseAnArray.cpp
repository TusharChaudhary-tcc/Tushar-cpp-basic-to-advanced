#include <bits/stdc++.h>
using namespace std;

// Method 1
// vector<int> reverseAnArray(vector<int> &v, int l, int r){
//     if(l>=r){
//         return v;
//     }
//     swap(v[l], v[r]);
//     reverseAnArray(v, l+1, r-1);

    
// }

// int main(){
//     vector<int> v={2,3,4,5,1,6,9};
//     int n=v.size();
//     int l=0; int r=n-1;

//     reverseAnArray(v, l, r);

//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
// }




//Method 2
// vector<int> reverseAnArray(vector<int> &v, int i){
//     int n=v.size();
//     if(i>=n/2){
//         return v;
//     }
//     swap(v[i], v[n-i-1]);

//     reverseAnArray(v, i+1);
    
// }

// int main(){
//     vector<int> v={2,3,4,5,1,6,9};
//     int i=0;
//     int n=v.size();
//     reverseAnArray(v, i);

//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
// }





// Palindrome using Recursion
bool isPalindrome(string s, int i){
    int n=s.size();
    if(i>=n/2){
        return true;
    }
    if(s[i] != s[n-i-1]){
        return false;
    }
    return isPalindrome(s, i+1);
   
}

int main(){
    string s;
    getline(cin, s);
    int i=0;
    if(isPalindrome(s, i)){
        cout<<"Yes a Palindrome."<<endl;
    }
    else{
        cout<<"Not a Palindrome."<<endl;
    }
}