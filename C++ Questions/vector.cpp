#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 1
    vector<int> v= {1,2,3,4,5,3};
    cout<<v.size()<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl<<endl<<endl;

    // 2
    vector<float> vec(5, 3.156);
    cout<<vec.size()<<endl;
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl<<endl<<endl;

    // 3
    vector<char> vch= {'a', 'b', 'c', 'd'};
    for (char val: vch){
        cout<<val<<endl<<endl<<endl;
    }


    // 4
    vector<int> v2;
    v2.push_back(10);             // adds element at the end
    v2.push_back(5);
    v2.push_back(23);
    v2.push_back(29);
    v2.push_back(32);
    v2.pop_back();                 // removes last element
    cout<<v2.size()<<endl;
    for(int i: v2){
        cout<<i<<", ";
    }
    cout<<endl<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;

    // cout<<endl<<v2.back()<<endl;    // prints last element
    // cout<<v2.front()<<endl;   // prints first element
    // cout<<v2.at(2)<<endl;      // prints element at i

}