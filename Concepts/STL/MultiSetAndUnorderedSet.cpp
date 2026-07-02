#include <bits/stdc++.h>
using namespace std;

int main(){
// MultiSet:-
// Everything is same as set
// stores duplicate elements also

    multiset<int> ms={1,2,2,3,4,4,4,4,5};
    ms.insert(7);
    ms.insert(9);
    ms.insert(9);
    ms.emplace(63);

    // ms.erase(2);                  // all 2's erased
    // ms.erase(ms.find(9));         // only a single 9 erased

    auto it=ms.find(4);
    ms.erase(it, next(it,4));

    for(auto a: ms){
        cout<<a<<" ";
    }
    cout<<endl;

    cout<<ms.count(2)<<endl;



// Unordered Set :- 
// lower_bound() and upper_bound() function does not works, rest all functions are same as above.
// It does not stores in any particular order it has a better complexity O(1) than set in most cases, except some when  collision happens

    unordered_set<int> s;


}