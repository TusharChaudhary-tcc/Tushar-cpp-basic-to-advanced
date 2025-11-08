#include <bits/stdc++.h>
using namespace std;
int main() {
    int a=4, b=5;
    cout<<"Operators in C++:\n";
    cout<<"Types of Operators:"<<endl;
    // Arithmetic Operators
    cout<<"The value of a+b is :"<<a+b<<endl;
    cout<<"The value of a-b is :"<<a-b<<endl;
    cout<<"The value of a*b is :"<<a*b<<endl;
    cout<<"The value of a/b is :"<<a/b<<endl;
    cout<<"The value of a%b is :"<<a%b<<endl;
    cout<<"The value of a++ is :"<<a++<<endl;
    cout<<"The value of a-- is :"<<a--<<endl;
    cout<<"The value of ++a is :"<<++a<<endl;
    cout<<"The value of --a is :"<<--a<<endl;
    cout<<endl;

    // Assignment Operators --> Used to assign values to variables
    // int a=3, b=9;
    // char d='D';

    // Comparison Operators
    cout<<"Following are the comparison operators in C++:"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;

    // Logical Operators
    cout<<"Following are the Logical operators in C++:"<<endl;
    cout<<"The value of this logical 'and operator' ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;  //In 'and' operator both the conditions must be true to return true(1) or vice versa
    cout<<"The value of this logical 'or operator' ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;   //In 'or' operator if any one condition is true it returns true(1) or vice versa
    cout<<"The value of this logical 'not operator' (!(a==b)) is: "<<(!(a==b))<<endl;                  //In 'not' operator it reverses the condition i.e if the condition is true it returns false(0) or vice versa


}