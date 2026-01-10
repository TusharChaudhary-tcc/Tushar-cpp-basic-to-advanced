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
bool isPalindrome( string s){
    string original=s;
    int n=s.length();
    for(int i=0; i<n/2; i++){
     if(s[i]!=s[n-1-i]){
        return false;
     }  
     else{
        return true;
     }
    }
}
int main(){
    string s={"level"};

    if(isPalindrome(s)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}