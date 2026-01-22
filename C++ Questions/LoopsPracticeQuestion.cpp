#include <bits/stdc++.h>
using namespace std;

int main(){

    // Q. Write a program to reverse a given integer.
    // int num;
    // cout<<"Enter a number : ";
    // cin>>num;
    // int reverse=0;
    // while(num>0){
    //     int rem =num%10;
    //     reverse=reverse*10+rem;
    //     num/=10;
    // }
    // cout<<reverse<<endl;
    // return 0;


    // Q. Write a program to find the sum of digits of a number.
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int sum=0;
    // while(n>0){
    //     int rem=n%10;
    //     sum+=rem;
    //     n/=10;
    // }
    //  cout<<sum<<endl;


    // Q. Write a program to calculate the factorial of a number.
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int tem=1;
    // for(int i=1; i<=n; i++){
    //     tem*=i;
    // }
    // cout<<tem;


    // Q. Write a program to print all even numbers from 1 to N.
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    // }


    // Q. Write a program to check whether a number is prime or not.
    // int n;
    // cin>>n;
    // if(n<1){
    //     cout<<"Not prime"<<endl;
    // }
    // bool isPrime=true;
    // for(int i=2; i<n; i++){
    //     if(n%i==0){
    //         isPrime=false;
    //     }
    // }
    // if(isPrime){
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not Prime";
    // }


    // Q. Write a program to print the first N terms of the Fibonacci series.
    // int n;
    // cin>>n;
    // int a=0;
    // int b=1;
    // for(int i=0; i<n; i++){
    //     cout<<a<<" ";
    //     int temp =a+b;
    //     a=b;
    //     b=temp;
    // }
    

    // Q. Write a program to check whether the number is Palindrome or not.
    // int num;
    // cin>>num;
    // int original=num;
    // int reverse=0;
    // while(num>0){
    //     int rem=num%10;
    //     reverse=reverse*10+rem;
    //     num/=10;
    // }
    // if(original==reverse){
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }


    // Q. Write a program to check whether the number is Armstrong number or not.
    // int num;
    // cin>>num;
    // int temp=num;
    // int original=num;
    // int count=0;
    // while(num>0){
    //     num/=10;
    //     count++;
    // }
    // int check=0;
    // while(temp>0){
    //     int rem=temp%10;
    //     int power=1;
    //     for(int i=0; i<count; i++){
    //         power*=rem;
    //     }
    //     check+=power;
    //     temp/=10;
    // }
    // if(check==original){
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }


// Q. Write a program to input three numbers and determine which number is the largest among them.Using Ternary Operator
//   int a,b,c;
//   cin>>a>>b>>c;
//   int max=(a>b)? ((a>c)?a:c): ((b>c)?b:c);
//   cout<<max;


// Q. Write a program to input a year and check the input year is leap year or not using ternary Operator.
//   int y;
//   cin>>y;
//   cout<<((y%400==0)||((y%4==0)&&(y%100!=0))? "Leap Year":"Not a Leap Year");

//Q. Write a program to input a 4 digits number and check the input number is palindrome or not using ternary Operator.
// int num;
// cin>>num;
// int original=num;
// int reverse=0;
// while(num>0){
//     int rem=num%10;
//     reverse=(reverse*10)+rem;
//     num/=10;
// }
// cout<<((reverse==original)? "Yes": "No");

// Q. Write a program to input two numbers and one operation choice(1.Addition, 2.Subtraction, 3. Multiplication, 4. Division).Perform the binary operation as per the given choice.
// int a,b,op;
// cin>>a>>b>>op;
    // if(op==1){
    //     cout<<a+b<<endl;
    // }
    // else if(op==2){
    //     cout<<a-b<<endl;
    // }
    // else if(op==3){
    //     cout<<a*b<<endl;
    // }
    // else if(op==4){
    //     if(b!=0){
    //     cout<<a/b<<endl;
    //     }
    // }
    // else{
    //     cout<<"Invalid choice"<<endl;
    // }

    // switch(op){
    // case 1: cout<<a+b; break;
    // case 2: cout<<a-b; break;
    // case 3: cout<<a*b; break;
    // case 4: cout<<((b!=0)? a/b : 0); break;
    // default: cout<<"Invalid Choice";
    // }

    

    // Q. Generate and display the Fibonacci sequence up to a given limit.
    // int n;
    // cin>>n;
    // int a=0;
    // int b=1;
    // while(a<=n){
    //     cout<<a<<" ";
    //     int temp=a+b;
    //     a=b;
    //     b=temp;
    // }

    // Q. Check for Armstrong Number
    // int num;
    // cin>>num;
    // if(num<0){
    //     cout<<"Not a Armstrong"<<endl;
    // }
    // int original=num;
    // int copy=num;

    // int power=0;
    // while(num>0){
    //     power++;
    //     num/=10;
    // }
    // int check=0;
    // while(copy>0){
    //     int rem=copy%10;
    //     int count=1;
    //     for(int i=0; i<power; i++){
    //         count*=rem;
    //     }
    //     check+=count;
    //     // check+=ceil(pow(rem, power));
    //     copy/=10;
    // }
    // cout<<check<<endl;
    // if(check==original){
    //     cout<<"It is an Armstrong"<<endl;
    // }
    // else{
    //     cout<<"Not a Armstrong"<<endl;
    // }

    // Q. Find the sum of digits of a number repeatedly until the sum becomes a single-digit number.
    // int num;
    // cin>>num;
    // while(num>10){
    //     int sum=0;
    //     while(num>0){
    //         sum+=num%10;
    //         num/=10;
    //     }
    //     num=sum;
    // }
    // cout<<num<<endl;


    // Q. find and print all prime numbers between 1 and N.
    // int n;
    // cin>>n;
    // for(int i=2; i<=n; i++){
    //     bool isPrime=true;
    //     for(int j=2; j<=i-1; j++){           // we can also use this j*j < i;
    //         if(i%j==0){
    //             isPrime = false;
    //         }
    //     }
    //     if(isPrime){
    //         cout<<i<<" ";
    //     }
    // }
    // return 0;

// Q.  PatternDisplay
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     // spaces (centering)
    //     // for (int s = 1; s <= n - i; s++) {
    //     //     cout << " ";
    //     // }
    //     // increasing part
    //     for (int j = 1; j <= n; j++) {
    //         cout << j;
    //     }
    //     // decreasing part
    //     for (int j = i - 1; j >= 1; j--) {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // return 0;


    //  Q. Display the  top three students marks.given that n students marks
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=1; i<=n; i++){
    //     cin>>arr[i];
    // }
    // int first=INT_MIN;
    // int second=INT_MIN;
    // int third=INT_MIN;
    //     for(int i=1; i<=n; i++){
    //         if(arr[i]>first){
    //             third=second;
    //             second=first;
    //             first=arr[i];
    //         }
    //         else if(arr[i]>second && arr[i]!=first){
    //             third=second;
    //             second=arr[i];
    //         }
    //         else if(arr[i]>third && arr[i]!=first && arr[i]!=second){
    //             third=arr[i];
    //         }
    //     }
    // cout<<first<<" "<<second<<" "<<third;




    // Q. Find the location of a given number N in an array whose size and elements are given.The elements are stored in an array are in increasing order.
    int n, f;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>f;
    for(int i=0; i<n; i++){
        if(f==arr[i]){
            cout<<i<<endl;
        }
    }




}