#include <bits/stdc++.h>
using namespace std;

int main() {

    // Q. Find the smallest number.

    // int nums[]={17, 15, -99, 87, 56, 34};
    // int size=6;
    
    // int smallest= INT_MAX;
    
    // for(int i=0; i<size; i++){
    //     if(nums[i]<smallest){
    //         smallest=nums[i];
    //     }
    // }
    // cout<<"Smallest no. is "<<smallest;





    // Q. Find the greatest number.
    int s[]={-20, 89, 92, 1334, 21, 523};
    int size=6;
    int greatest= INT_MIN;
    for(int i=0; i<size; i++){
        if(s[i]>greatest){
            greatest=s[i];
        }
    }
    cout<<"Greatest no. is "<<greatest<<endl;
    // cout<<s[greatest]<<endl;
}
