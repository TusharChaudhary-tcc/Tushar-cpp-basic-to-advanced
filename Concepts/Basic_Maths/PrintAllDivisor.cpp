#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

// Good for Small numbers
    // for(int i=1; i<=num; i++){
    //     if(num%i==0){
    //         cout<<i<<" ";
    //     }
    // }

   

//Better for Large numbers
    vector<int> vec;
    for(int i=1; i<=sqrt(num); i++){               // i<=sqrt(num)   =   i*i<=num
        if(num%i==0){
            vec.push_back(i);
            if((num/i)!=i){
                vec.push_back(num/i);
            }
        }
    }
    sort(vec.begin(), vec.end());

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}