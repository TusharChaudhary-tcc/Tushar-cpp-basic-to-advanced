#include <bits/stdc++.h>
using namespace std;

//       Calculate Sum of digits of a number.

long SumOfDigits(long num){
    long digitSum=0;
    while(num>0){
        long lastDigit=num%10;
        num= num/10;
        digitSum+=lastDigit;
    }
    return digitSum;
}
int main() {
    int n;
    cin>>n;
    cout<<SumOfDigits(n);
    
    return 0;

}
