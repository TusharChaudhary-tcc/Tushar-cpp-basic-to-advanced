#include <bits/stdc++.h>
using namespace std;

int main(){
    // Stack:- It follows the LIFO rule - Last In First Out.   
    // There are only three function in Stack:- 1. push     2. pop     3. top

    // stack<int> st;

    // st.push(44);    
    // st.push(31);    
    // st.push(12);
    // st.push(17);
    // st.emplace(11);             // emplace is similar to push

    // cout<<st.top()<<endl;

    // cout<<st.size()<<endl;

    // cout<<st.empty()<<endl;
    
    // stack<int> st1, st2;
    // st1.swap(st2);
    



    //Queue:- It follows the FIFO rule - First In First Out.
    // queue<int> q;
    // q.push(45);
    // q.emplace(22);
    // q.push(34);

    // cout<<q.back()<<endl;

    // q.back()+=5;

    // cout<<q.back()<<endl;

    // cout<<q.front()<<endl;

    // q.pop();                 // Remove first element becoz of FIFO rule

    // cout<<q.back()<<endl;
    // cout<<q.front()<<endl;


    // Priority Queue:- It store element based their value means large value on top and further so on.
    priority_queue<int> pq;
    pq.push(4);  //{4}
    pq.push(2);  //{2,4}
    pq.push(8);  //{2,4,8}
    pq.push(1);  //{1,2,4,8}
    pq.push(9);  //{1,2,4,8,9}

    cout<<pq.top()<<endl;


    
}