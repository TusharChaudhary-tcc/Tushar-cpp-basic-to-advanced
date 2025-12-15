#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Question1. Write a program to input two numbers and one operation choice(1.Addition, 2.Subtraction, 3. Multiplication, 4.Division).Perform the binary operation as per the given choice.
                  
    // int a, b, opr;
    // cin >> a >> b >> opr;
    // cout << "First number : " << a << endl;
    // cout << "Second number : " << b << endl;
    // cout << "Enter your chice from 1 to 4 : " << opr << endl;

    // switch (opr)
    // {
    // case 1:
    //     cout << "Addition : " << a + b;
    //     break;
    // case 2:
    //     cout << "Subtraction : " << a - b;
    //     break;
    // case 3:
    //     cout << "Multiplication : " << a * b;
    //     break;
    // case 4:
    //     cout << "Division : " << a / b;
    //     break;
    // default:
    //     cout << "Enter the number between 1 to 4.";
    //     break;
    // }



     // Question 2:-  Generate and display the Fibonacci sequence up to a given limit
     int n;
     cout<<"Enter how many terms you want: ";
     cin>>n;
     int a=0;
     int b=1;
     for(int i=0; i<=n; i++){
        cout<<a<<" ";
        int next= a+b;
        a=b;
        b=next;

     }
    return 0;
}