#include <bits/stdc++.h>
using namespace std;

int main(){
// Map :- map<key, value> m;
// It stores unique key in sorted order (key in sorted order).

    map<int, int> m;
    map<int, pair<int,int>> mp;
    map<pair<int, int> , int> mp1;

    m[3]=4;
    m.insert({1,6});
    m.emplace(4,7);

    for(auto a: m){
        cout<<a.first<<" "<<a.second<<endl;
    }

    mp[4]={1,4};
    mp.insert({2, {1,7}});

    cout<<endl;
    for(auto b: mp){
        cout<<b.first<<" "<<b.second.first<<" "<<b.second.second<<endl;
    }
    cout<<endl;
    auto it=mp.find(2);
    cout<<(*it).second.first<<endl;


    mp1[{2,4}]=2;
    mp1.emplace(pair<int,int>{5,6}, 8);

    cout<<endl;
    for(auto b: mp1){
        cout<<b.first.first<<" "<<b.first.second<<" "<<b.second<<endl;
    }
    cout<<endl;


    auto it1=mp1.find({5,6});
    cout<<(*it1).second<<endl;


    auto it2= mp.lower_bound(2);
    cout<<(*it2).second.second<<endl;



// multimap:- Everything same as map, only it can store duplicate key


// unordered_map:-  difference as set and unordered_set
// It does not stores in any particular order it has a better complexity O(1) than set in most cases, except some when  collision happens


// ***** There are two common ways to check if an element exists in a set or unordered_set.
// 1. Using find()  (Most common)
unordered_map<int, int> m3;

m3[10] = 5;
m3[20] = 8;

if (m3.find(10) != m3.end()) {
    cout << "Key is present";
} else {
    cout << "Key is not present";
}
     
// 2. Using count()
unordered_map<int, int> m;

m[10] = 5;
m[20] = 8;

if (m.count(10)) {
    cout << "Key is present";
} else {
    cout << "Key is not present";
}

}