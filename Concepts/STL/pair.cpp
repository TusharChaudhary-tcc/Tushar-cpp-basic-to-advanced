#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p={1,3};

    pair<int, pair<int, int>> p1={2,{4,5}};

    cout<<p.first<<" "<<p.second<<endl<<endl;

    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int, int> arr[]= {{2,3}, {4,5}, {1,6}, {2,9}};
    cout<<arr[1].second<<" "<<arr[1].first<<endl<<endl;

}