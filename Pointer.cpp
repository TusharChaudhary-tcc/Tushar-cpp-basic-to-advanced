#include <bits/stdc++.h>
using namespace std;
int main() {
    // What is pointer in C++?
    // A pointer is a variable that stores the memory address of another variable.

    int a=3;
    int* b= &a;
    // & ----> (Address of) Operator
    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of a using pointer b is : "<<b<<endl;
    // * ----> (Value at) Dereference Operator
    cout<<"The value at address b is : "<<*b<<endl<<endl;




    // Pointer to Pointer ---> This is a variable that stores the address of another pointer variable.
    //It is not much important but good to know.
    int** c= &b;
    cout<<"The address of pointer b is : "<<&b<<endl;
    cout<<"The address of pointer b using pointer to pointer c is : "<<c<<endl;
    cout<<"The value at address c is : "<<*c<<endl;
    cout<<"The value at address stored in pointer b using pointer to pointer c is : "<<**c<<endl;

    return 0;
}