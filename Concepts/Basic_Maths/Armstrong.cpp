#include <bits/stdc++.h>
using namespace std;

int main(){
    // Armstrong Number:- An Armstrong number is a number that is equal to the sum of its own digits, where each digit is raised to the power of the total number of digits.
//     Example 3: 9474
// It has 4 digits.
// Digits: 9, 4, 7, 4
// 9^4 + 4^4 + 7^4 + 4^4 =6561 + 256 + 2401 + 256 = 9474



    int num;
    cin>>num;
    int temp=num;
    int count= (int)(log10(num)+1);            //Shortcut to count number of digits of a number
    int sum=0;

    while(temp>0){
        int rem=temp%10;
        int p=1;
        int power=count;
        while(power>0){
            p*=rem;
            power--;
        }
        sum+= p;
        // sum+= pow(rem, count);
        temp/=10;
    }

    if(sum==num){
        cout<<"Yes an Armstrong Number"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }
}