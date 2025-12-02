// #include <bits/stdc++.h>
// using namespace std;

// // int sum(int a, int b);       // Acceptable Function Declaration
// // int sum(int, int);           // Acceptable Function Declaration
// // int sum(int a, b);           // Not Acceptable Function Declaration
// // int sum(a, b);               // Not Acceptable Function Declaration

// int sum(int a, int b){

//                                  // formal parameters a and b will be taking values from actual parameters num1 and num2

//     int c =a+b;
//     return c;
// }
// int main() {
//     int num1, num2;
//     cout<<"Enter the first number : ";
//     cin>>num1;
//     cout<<"Enter the second number : ";
//     cin>>num2;
//                                  // num1 and num2 are actual parameters
//     cout<<"The sum is : "<<sum(num1, num2);

//     return 0;
// }







#include <bits/stdc++.h>
using namespace std;

int sum(int, int);       // Function Declaration
void g(void);

int main() {
    int num1, num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is : "<<sum(num1, num2)<<endl;
       return 0;
}

    int sum(int a, int b){
    // formal parameters a and b will be taking values from actual parameters num1 and num2
    int c =a+b;
    return c;
    
}
void g(){
        cout<<"Hello, Good Morning"<<endl;
    }

 