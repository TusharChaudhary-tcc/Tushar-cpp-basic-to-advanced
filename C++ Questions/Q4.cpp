#include <bits/stdc++.h>
using namespace std;

// int main() {
//     // Q. Find the smallest number.
//     //Isme INT_MAX ek function h jo sabse random biggest value ko store kr deta h jisse ki uss value se chota number milne ke baad bo wali value usme store ho jaati h aur fir loop ke according jo choti value hoti jaegi bo usme store hoti jaegi

//     int nums[]={17, 15, -99, 87, 56, 34};
//     int size=6;
    
//     int smallest= INT_MAX;
//     for(int i=0; i<size; i++){
//         if(nums[i]<smallest){
//             smallest=nums[i];
//         }
//     }
//     cout<<"Smallest no. is "<<smallest;


//     // Q. Find the greatest number.
//      //Isme INT_MIN ek function h jo sabse random chhoti value ko store kr deta h jisse ki uss value se bda number milne ke baad bo wali value usme store ho jaati h aur fir loop ke according jo bdi value hoti jaegi bo usme store hoti jaegi

// //     int s[]={-20, 89, 92, 1334, 21, 523};
// //     int size=6;
// //     int greatest= INT_MIN;                       
// //     for(int i=0; i<size; i++){
// //         if(s[i]>greatest){
// //             greatest=s[i];
// //         }
// //     }
// //     cout<<"Greatest no. is "<<greatest<<endl;
// //     // cout<<s[greatest]<<endl;

// }


//  FUNCTION
// With loop and using *max_element() function
// int MinNum(int n[], int size){
//     int smallest=*max_element(n, n+size);
//     for(int i=0; i<size; i++){
//         if(n[i]<smallest){
//             smallest=n[i];
//         }
//     }
//     return smallest;
// }
// int main(){
//     int num[]={12, 44, 56, 32,98, 78};
//     int size=sizeof(num)/sizeof(num[0]);
//     cout<<MinNum(num, size);
//     return 0;
// }



//  FUNCTION
// Without loop and using *min_element() function
// int MinNum(int n[], int size){
//     int smallest=*min_element(n, n+size);
//     return smallest;
// }
// int main(){
//     int num[]={12, 44, 56, 32,98, 78};
//     int size=sizeof(num)/sizeof(num[0]);
//     cout<<MinNum(num, size);
//     return 0;
// }