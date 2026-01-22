#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=(i-1)*2; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=n-i+1; k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// Diamond Pattern
// int main(){
//     int n=10;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=(n-i)*2; j++){
//             cout<<" ";
//         }   
//         for(int k=1; k<=2*i-1; k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    // for(int p=1; p<n; p++){
    //     for(int q=1; q<=p*2; q++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=2*(n-p)-1; k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
// }


// Butterfly
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for(int p=1; p<=i; p++){
//             cout<<"* ";
//         }
//         for(int j=1; j<=4*(n-i); j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int p=1; p<=i; p++){
//             cout<<"* ";
//         }
//         for(int j=1; j<=(n-i)*4; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
// int n=5;
// for(int i=0; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<" ";
//     }
//     for(int k=1; k<=n-i; k++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// // int n=5;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     for(int k=1; k<=i; k++){
//         cout<<k<<" ";
//     }
//     cout<<endl;
// }
// }




// Q1. Write a program to print a right triangle pattern of stars using loops.
// int main(){
//     int n=4;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Q2. Write a program to print an inverted right triangle pattern of stars.
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Q3. Write a program to print a half pyramid pattern using numbers.
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// Q4. WAP to print an inverted number pyramid pattern.
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl<<endl;
//     }
// }

// Q5. WAP to print Floyd’s triangle using consecutive numbers.
// int main(){
//     int n=4;
//     int num=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }

// Q6. Write a program to print a square of stars using nested loops.
// int main(){
//     int n=3;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Q7. Write a program to print a hollow square pattern of stars.
// int main(){
//     int n=4;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i==1 || i==n || j==1 || j==n){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Q8. Write a program to print a pyramid pattern of stars.
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=(n-i)*2; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }    
// }


// Q9. Write a program to print a diamond pattern of stars using loops
// int main(){
//     int n=5;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=1; i<n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=n-i; k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Q10. Write a program to print Pascal’s triangle up to N rows using loops
// int main(){
//     int n=6;
//     for(int i = 0; i < n; i++) {
//     int val = 1;

//     for(int j = 0; j <= i; j++) {
//         cout << val << " ";
//         val = val * (i - j) / (j + 1);
//     }
//     cout << endl;
// }
// }



// Hollow Diamond
// int main(){
//     int n=7;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=2*i-1; k++){
//             if(k==1||k==2*i-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }   
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i>=1; i--){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=2*i-1; k++){
//             if(k==1||k==2*i-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// // Q. BINARY SEARCH
// int binarySearch(int n, int arr[], int key){
//     int s=0, e=n-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(key<arr[mid]){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<binarySearch(n, arr, key)<<endl;
// }



// // Q. Binary Search for First Occurrence
// int firstOcc(int n, int arr[], int key){
//     int s=0, e=n-1;
//     int ans=-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(key<arr[mid]){
//             e=mid-1;
//         }
//         else {
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<firstOcc(n, arr, key)<<endl;
// }

// // Q. Binary Search for Last Occurrence
// int lastOcc(int n, int arr[], int key){
//     int s=0, e=n-1;
//     int ans=-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(key<arr[mid]){
//             e=mid-1;
//         }
//         else {
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<lastOcc(n, arr, key)<<endl;
// }






// // Q. Count Occurrences of an element in a sorted array
//  int firstOcc(int n, int arr[], int key){
//     int s=0, e=n-1;
//     int ans=-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(key<arr[mid]){
//             e=mid-1;
//         }
//         else {
//             s=mid+1;
//         }
//     }
//     return ans;
// }
//  int lastOcc(int n, int arr[], int key){
//     int s=0, e=n-1;
//     int ans=-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(key<arr[mid]){
//             e=mid-1;
//         }
//         else {
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int countOcc(int n, int arr[], int key){
//     int first=firstOcc(n, arr, key);
//     if(first==-1)return 0;
//     int last=lastOcc(n, arr, key);
//     return last-first+1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<countOcc(n, arr, key);
// }



