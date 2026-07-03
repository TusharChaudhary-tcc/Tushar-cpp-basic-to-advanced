#include <bits/stdc++.h>
using namespace std;

int main(){
    // Palindrome Number:- The number which is equal to its reverse num

    int num;
    cin>>num;
    int temp=num;
    int rev=0;
    while(num>0){
        int rem=num%10;

        rev= (rev*10)+rem;
        num/=10;
    }
    num=temp;

    if(num==rev){
        cout<<"Yes a Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    
}