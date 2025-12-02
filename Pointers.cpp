#include <bits/stdc++.h>
using namespace std;
int main(){
    // What is Pointers in C++?
    // A pointer is a variable that stores the memory address of another variable.
    // int a=3;
    // int *b= &a;                

    //  // & ---> (address of) operator
    // cout<<"address of a is : "<<b<<endl; 
    // cout<<"address of a is : "<<&a<<endl; 

    // // * ---> (value at) Dereference operator
    // cout<<"The value at address of b is : "<<*b<<endl;



    // Pointer to Pointer
    int a=3;
    int* b= &a;
    int** c= &b;
    cout<<"The address of a is : "<<b<<endl;
    cout<<"The address of a is : "<<&a<<endl<<endl<<endl;

    cout<<"The address of b is : "<<c<<endl;
    cout<<"The address of b is : "<<&b<<endl<<endl<<endl;

    cout<<"The address of c is : "<<&c<<endl<<endl<<endl;

    cout<<"The value at address a is : "<<*b<<endl;
    cout<<"The value at address b is : "<<**c<<endl;




}