#include <bits/stdc++.h>
using namespace std;

// Q. Find the sum of all elements in an array.

// int sumOfElements(int arr[], int sz){
//     int add=0;
//     int product=1;
//     for(int i=0; i<sz; i++){
//        add +=arr[i];
//     }
//     return add;
// }
// int main(){
//     int arr[]= {1,2,3,4,5,6,78,8};
//     int sz=8;
//     int add= sumOfElements(arr, sz);
//     cout<<add<<endl;
//     return 0;
// }





// Q. Find the product of all elements in an array.

int productOfElements(int arr[], int sz){
    int product = 1;
    for(int i=0; i<sz; i++){
        product *= arr[i];
    }
    return product;
}
int main(){
    int arr[]= {1,2,3,4,5,6,77,88};
    int sz=8;
    int product= productOfElements(arr, sz);
    cout<<product<<endl;
    return 0;
}