#include <bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<"Demonstrating if-else and switch-case conditions in C++"<<endl;
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // Selection control structure: If else-if else ladder
    // if ((age<18)&&(age>0))
    // {
    //     cout <<"Your are not eligible to vote."<< endl;
    // }
    // else if (age==18)
    // {
    //     cout <<"Your are eligible to vote for the first time."<< endl;
    // }
    // else if(age<1)
    // {
    //     cout<<"You are not born yet!"<<endl;
    // }
    // else
    // {
    //     cout <<"You are eligible to vote."<< endl;
    // }



    // Selection control structure: Switch case statement
    // switch (age)
    // {
    // case 18:
    //     cout << "You are 18 years old." << endl;
    //     break;
    // case 22:
    //     cout<<"Your are 22 years old."<<endl;
    //     break;
    // case 35:
    // cout<<"Your age is 35 years."<<endl;
    //     break;
    //     default:
    //     cout<<"Your age is neither 18, 22 nor 35 years."<<endl;
    //     break;
    // }
    // return 0;







    int n, a=0, b=1, c;
cout<<"Enter the number : ";
cin>>n;
for(int i=1; i<=n; i++){
    cout<<a<<" ";
    c= a+b;
    a=b;
    b=c;

}
return 0;
}