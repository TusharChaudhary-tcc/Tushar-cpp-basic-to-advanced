#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<pair<int,int>> vec;              //Vector of Pairs

    vec.push_back({3,4});
    vec.emplace_back(9,1);                  //Similar to .push_back
    // for(auto a:vec){
    //     cout<<a.first<<" "<<a.second;
    //     cout<<endl;
    // }
    // cout<<vec.back().first<<endl;

// Iterators :- it give the memory address of element of vector to get element we use pointer(*)
    vector<int> v={2,4,7,9,3,1,5};

    //To get element from first
    // vector<int>::iterator it= v.begin();
    // it++;
    // cout<<*it<<endl;

    //To get last element by iterator
    // vector<int>::iterator it1= v.end();     
    // it1--;
    // cout<<*it1<<endl;

// Three methods to print using iterators:-

    // 1
    // for(vector<int>::iterator it2= v.begin(); it2!=v.end(); it2++){
    //     cout<<*(it2)<<" ";
    // }
    // cout<<endl<<endl;

    // 2
    // for(auto it3=v.begin(); it3!=v.end(); it3++){
    //     cout<<*(it3)<<" ";
    // }
    // cout<<endl<<endl;

    // 3
    // for(auto it4: v){
    //     cout<<it4<<" ";
    // }
    // cout<<endl<<endl;

// Erase Method
    // v.erase(v.begin()+2);
    // for(auto a:v){
    //     cout<<a<<" ";
    // }
    // cout<<endl<<endl;

    
    // v.erase(v.begin()+1, v.begin()+3);             //[start, end)
    // for(auto a:v){
    //     cout<<a<<" ";
    // }
    // cout<<endl<<endl;

// Insert Function
    vector<int> v1(2, 100);           //{100, 100}
    v1.insert(v1.begin(), 300);       //{300,100,100}
    v1.insert(v1.begin()+1, 2, 10);   //{300, 10, 10, 100, 100}

    vector<int> copy(2, 50);                              //{50, 50}
    copy.insert(copy.begin(), v1.begin(), v1.end());    //{300, 10, 10, 100, 100, 50, 50}


    cout<<v1.size()<<endl;
    for(auto a:v1){
        cout<<a<<" ";
    }
    cout<<endl<<endl;

    for(auto b:copy){
        cout<<b<<" ";
    }

// Clear Function
    v1.clear();
    cout<<v1.empty()<<endl<<endl;     //If empty it gives True(1)   and if not it gives False(0)

// Swap
    vector<int> v5={2,3,9};
    vector<int> v6={1,0,6};
    swap(v5,v6);

    for(auto a: v5){
        cout<<a<<" ";
    }
    cout<<endl;
    for(auto a: v6){
        cout<<a<<" ";
    }

}