#include <bits/stdc++.h>
using namespace std;

int swapMinMax(int arr[], int sz){
int minIndex=0;
int maxIndex=0;

for(int i=0; i<sz; i++){
    if(arr[i]<arr[minIndex])
        minIndex=i;
        if(arr[i]>arr[maxIndex])
        maxIndex=i;

}
    int temp= arr[minIndex];
    arr[minIndex]=arr[maxIndex];
    arr[maxIndex]=temp;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int sz = 6;
    swapMinMax(arr, sz);

    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
}