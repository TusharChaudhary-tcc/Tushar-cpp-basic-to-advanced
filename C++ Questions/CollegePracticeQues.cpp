#include <bits/stdc++.h>
using namespace std;


// Question 7.1
// int average(int n, int arr[], vector<int> &result){
//     int total=0;
//     for(int i=0; i<n; i++){
//         total+=arr[i];
//     }

//     int avg =(total/n);
//     result.push_back(total);
//     result.push_back(avg);
// }
// int main(){
//     int n;
//     cout<<"Enter size : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the marks : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }  
//     vector<int> result;
//     average(n, arr, result);
//     cout<<"Total marks is : "<<result[0]<<endl;
//     cout<<"Average of Marks is : "<<result[1]<<endl;
// }


//  Question 7.2

// void analyze(int N, int arr[], vector<int> &result){
//     for(int i=0; i<N; i++){
//         if(arr[i]%2==0){
//             result.push_back(arr[i]);
//         }
//     }
// }
// int main(){
//     int N;
//     cout<<"Enter the size : ";
//     cin>>N;
//     int arr[N];
//     cout<<"Enter Numbers : ";
//     for(int i=0; i<N; i++){
//         cin>>arr[i];
//     }
//     vector<int> result;
//     analyze(N, arr, result);
//     cout<<result.size()<<endl;
// }

// Question 8.1

// int main(){
//     string s={"smart"};
//     int n= s.length();

//     for(int i=0; i<n/2; i++){
//         char temp= s[i];
//         s[i]= s[n-1-i];
//         s[n-1-i]=temp;
//     }
//     cout<<"Reversed string : "<<s<<endl;

// }

// int main(){
//     string s={"smart"};
//     string rev;
//     int n=s.length();
//     for(int i=n-1; i>=0; i--){
//         rev+=s[i];
//     }
//     cout<<rev<<endl;
// }

// int main(){
//     string s={"smart"};
//     int i=0;
//     int j= s.length()-1;
//     while(i<j){
//         char temp=s[i];
//         s[i]=s[j];
//         s[j]=temp;
//         i++;
//         j--;
//     }
//     cout<<s<<endl;
// }

// int main(){
//     string s={"smart"};

//     reverse (s.begin(), s.end());
//     cout<<s<<endl;
// }


// Question 8.2
// int main(){
//     string s={"Hello World"};
//     int n=s.length();
//     int count =0;
//     for(int i=0; i<n; i++){
//         char ch=s[i];
//         if(ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
//             ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
//                 count++;
//             }
//     }
//     cout<<count;

//     return 0;
// }


// Pre end term Question no. 6.(a)
// void alphabet(string s){
//     int n=s.length();
//     bool hasalpha= false;
//     bool hasdigit= false;
//     for(int i=0; i<n; i++){
//         char ch=s[i];
//         if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z')){
//             hasalpha=true;
//         }
//         if(ch>='0' && ch<='9'){
//             hasdigit=true;
//         }
//     }
//     if(hasalpha && hasdigit){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// }
// int main(){
//     string s={"Tushar Chaudhary 1"};
//     alphabet(s);

//     return 0;
// }


// 
// bool isPalindrome( string s){
//     string original=s;
//     int n=s.length();
//     for(int i=0; i<n/2; i++){
//      if(s[i]!=s[n-1-i]){
//         return false;
//      }  
//      else{
//         return true;
//      }
//     }
// }
// int main(){
//     string s={"level"};

//     if(isPalindrome(s)){
//         cout<<"True"<<endl;
//     }
//     else{
//         cout<<"False"<<endl;
//     }
//     return 0;
// }




// Array Question 1
// int sumArray(int n, int arr[]){
//     int sum=0;
//     for(int i=0; i<n; i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"Enter size : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter array numbers : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<sumArray(n, arr);
//     return 0;
// }

// Array Question 2
// int maxNum(int n, int arr[]){
//     int int_Max=arr[0];
//     for(int i=0; i<n; i++){
//         if(arr[i]>int_Max){
//             int_Max=arr[i];
//         }
//     }
//     return int_Max;
// }
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<maxNum(n, arr);
// }


// Write a program to count the number of even and odd elements in an array.
// void evenOdd(int n, int arr[]){
//     int count1=0;
//     int count2=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0){
//             count1++;
//         }
//         else{
//             count2++;
//         }
//     }
//     cout<<count1<<"  ";
//     cout<<count2;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     evenOdd(n, arr);
// }

//  Write a program to print the elements of an array in reverse order.
// void reverseArray(int n, int arr[]){
//     for(int i=0; i<n/2; i++){
//         int temp=arr[i];
//         arr[i]=arr[n-1-i];
//         arr[n-i-1]=temp;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     reverseArray(n, arr);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// Q.6  Write a program to search for an element in an array.
// void search(int n, int arr[], int x){
//     for(int i=0; i<n; i++){
//         if(x==arr[i]){
//             cout<<"Found"<<endl;
//             return;
//         }
//     }
//     cout<<"Not Found"<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     search(n, arr, x);
//     return 0;
// }

// Q7. Write a program to copy all elements from one array to another.
// int main(){
//     int n;
//     cin>>n;
//     int arr1[n];
//     int arr2[n];
//     for(int i=0; i<n; i++){
//         cin>>arr1[i];
//     }
//     for(int i=0; i<n; i++){
//         arr2[i]=arr1[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr2[i]<<" ";
//     }
// }

// Q8. Write a program to find the frequency of each element in the array.
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     bool visited[n]= {false};

//     for(int i=0; i<n; i++){
//         if(visited[i])
//         continue;

//         int count =1;
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 visited[j]=true;
//             }
//         }
//         cout<<arr[i]<<" --> "<<count<<endl;
//     }
//     return 0;
// }


//  Q9. Write a program to sort the elements of an array in ascending order.
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]>arr[j]){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             }
//         }
//     }    
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Q10. Write a program to find the second largest element in an array.
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     int int_Max=INT_MIN;
//     int int_Max2=INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>int_Max){
//             int_Max2=int_Max;
//             int_Max=arr[i];
//         }
//         else if(arr[i]>int_Max2&&arr[i]<int_Max){
//             int_Max2=arr[i];
//         }
//     }
//     cout<<int_Max2;
// return 0;
// }