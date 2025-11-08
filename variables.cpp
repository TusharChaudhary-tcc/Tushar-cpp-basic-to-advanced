#include <bits/stdc++.h>
using namespace std;
int main() {
    int a = 17, b = 19;     // integer variable declaration and initialization
    float c = 3.14; 
    char d= 'Tu';           // char should hold single character only, here 'Tu' will be considered as string it always in a single quotes ''
    cout << "My name is Tushar Chaudhary." << "\nMy age is " << a << ". And my friend age is " << b << ".";
    cout << "\nThe value of pi is: " << c;    
    cout << "\nThe value of d is: " << d << endl;    
    string q= "\nTushar Jaat";
    cout<<q;

    return 0;
}


// for next line use \n or endl
// e.g., cout << "Hello\nWorld";      or      cout << "Hello" << endl << "World";
// Note: In C++, a char variable can only hold a single character. If you want to store multiple characters, consider using a string type instead.
// In the above code, 'd' is declared as a char but assigned 'Tu', which is more than one character. This should ideally be a string.
// Correct way to declare a string variable:
// string q = "Tushar Jaat";           it should be in double quotes "" for string type.
// Also, make sure to include the <string> header if you're using string type, although <bits/stdc++.h> includes it by default.