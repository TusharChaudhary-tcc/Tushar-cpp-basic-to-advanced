#include <bits/stdc++.h>
using namespace std;

int main(){
    // List:- It is all similar to vector only it provide function to push element in the front (.push_front()).
    list<int> ls={5,4,9};

    ls.push_back(69);
    ls.push_front(12);
    ls.pop_front();

    for(auto a:ls){
        cout<<a<<" ";
    }
    

    //Deque:- It is all similar to vector and list
    
}