#include <bits/stdc++.h>
using namespace std;

int main(){
    // Set :- It stores unique elements in sorted order.       (Unique and Sorted)

     set<int> s;
     s.insert(1);    // {1}
     s.insert(2);    // {1,2}
     s.insert(2);    // {1,2}
     s.emplace(4);   // {1,2,4}
     s.insert(3);    // {1,2,3,4}

     set<int> s4={2,3,5,6,7,8,9};
     auto it=s4.find(3);       //it points to the address of 3
     cout<<*it<<endl;

     auto it1=s4.find(7);       //If element found it return the element and if element not found it gives hypothetical index which is last index+1
     cout<<*it1<<endl;

   //   s4.erase(3);

   //   cout<<s4.count(2)<<endl;       //If element present it gives 1 and if not present it gives 0


     set<int> s1={2,4,5,7,9,11,13};
   //   auto it2=s1.find(4);
   //   auto it3=s1.find(11);
   //   s1.erase(it2, it3);               //erase the elements between the given values
   //   for(auto a: s1){
   //      cout<<a<<" ";
   //   }

//lower_bound() and upper_bound() :-

     auto it4=s1.lower_bound(9);
     cout<<*it4<<endl;

     auto it5=s1.upper_bound(9);
     cout<<*it5<<endl;

     auto it6=s1.upper_bound(15);
     cout<<*it6<<endl;



// ***** There are two common ways to check if an element exists in a set or unordered_set.
// 1. Using find() (Most common)

     unordered_set<int> s = {10, 20, 30};
      if (s.find(20) != s.end()) {
       cout << "Present";
      }
      else {
       cout << "Not Present";
      }


// 2. Using count()

      if (s.count(20)) {
       cout << "Present"; 
      } 
      else {
       cout << "Not Present";
      }

// Since a set cannot contain duplicates:
// s.count(x) returns 1 if present.
// s.count(x) returns 0 if not present.


}