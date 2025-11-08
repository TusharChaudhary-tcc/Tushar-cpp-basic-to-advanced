#include <bits/stdc++.h>
using namespace std;

int c=45;

int main () {

    // **************Build in Data Types in C++****************

    int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum of a+b is : "<<c<<endl;
    cout<<"The global c is : "<<::c<<endl;      // :: is scope resolution operator which is used to access the global variable when there is a local variable with same name
    cout<<endl<<endl<<endl;





    // **************Float, double and long double Literals****************

    float d= 34.4f;    //But it was considered as double by default so, the right way is to use 34.4f;
    double e= 34.4;   //Generally we can store double without using suffix d or D but if we want to specify explicitly then we can use suffix d or D. 
    cout<<"The value of d is : "<<d<<endl;
    cout<<"The value of e is : "<<e<<endl<<endl;

    cout<<"Size of 34.4 is : "<<sizeof(34.4)<<endl;          // it will be considered as double by default
    cout<<"Size of 34.4f is : "<<sizeof(34.4f)<<endl;        // it is float
    cout<<"Size of 34.4F is : "<<sizeof(34.4F)<<endl;        // it is float
    cout<<"Size of 34.4l is : "<<sizeof(34.4l)<<endl;        // it is long double but we should use suffix L or l for long double
    cout<<"Size of 34.4L is : "<<sizeof(34.4L)<<endl;        // it is long double but we should use suffix L or l for long double
    cout<<endl<<endl<<endl;
    // Difference between double and long double is that long double has more precision (more number of digits after decimal point) than double.





    // **************Reference Variables in C++****************
    // Tushar ---> Tussu --->

    float x=455;
    // float y=x;
    float & y=x;     //what is difference between y and &y here? = --> y is a normal variable which holds the value of x but &y is a reference variable which refers to the value of x i.e any changes made to y will also reflect in x because both are referring to same memory location. e.g., if we do y=500; then x will also become 500 because y is reference variable of x.
    y=500;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl<<endl<<endl;





    // **************Typecasting in C++****************

    double p=45.56436245783l;
    cout<<"The value of p is : "<<(float)p<<endl;   //typecasting double to float
    cout<<"The value of p is : "<<float(p)<<endl;     //typecasting double to float
    cout<<endl;

    float q=78.56;
    cout<<"The value of q is : "<<(int)q<<endl;     //typecasting float to int
    cout<<"The value of q is : "<<int(q)<<endl;       //typecasting float to int
    cout<<endl;

    cout<<"The expression is "<<p+q<<endl;
    cout<<"The expression is "<<p+(int)q<<endl;
    cout<<"The expression is "<<p+int(q)<<endl;
    cout<<endl;

    return 0;
}