#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

// First Method    
    // int hash[26]={0};
    // for(int i=0; i<s.size(); i++){
    //     hash[s[i]-'a']++;
    // }

    // int q;
    // cin>>q;
    // while(q--){
    //     char ch;
    //     cin>>ch;
    //     cout<<hash[ch-'a']<<endl;
    // }


// Second Method
// This Method can give frequency of both upperCase and lowerCase characters.
    // int hash[256]={0};
    // for(int i=0; i<s.size(); i++){
    //     hash[s[i]]++;
    // }

    // int q;
    // cin>>q;
    // while(q--){
    //     char ch;
    //     cin>>ch;
    //     cout<<hash[ch]<<endl;
    // }


}