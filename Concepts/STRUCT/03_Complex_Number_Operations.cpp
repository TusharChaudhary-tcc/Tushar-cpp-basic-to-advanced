#include <bits/stdc++.h>
using namespace std;

struct Complex{
    int real;
    int imag;
};
Complex AddComplexNo(struct Complex C1, struct Complex C2){
    struct Complex C3;
    C3.real=C1.real+C2.real;
    C3.imag=C1.imag+C2.imag;
    return C3;
}
Complex SubComplexNo(struct Complex C1, struct Complex C2){
    struct Complex C3;
    C3.real=C1.real-C2.real;
    C3.imag=C1.imag-C2.imag;
    return C3;
}
Complex MulComplexNo(struct Complex C1, struct Complex C2){
    struct Complex C3;
    C3.real = C1.real * C2.real - C1.imag * C2.imag;
    C3.imag = C1.real * C2.imag + C1.imag * C2.real;
    return C3;
}


int main(){
    struct Complex C1,C2,C3;
    cout<<"Enter the real and imaginary part of no. 1: ";
    cin>>C1.real>>C1.imag;
    cout<<"Enter the real and imaginary part of no. 2: ";
    cin>>C2.real>>C2.imag;
    
    C3 = AddComplexNo(C1, C2);
    cout << "Addition: ";
    cout << C3.real << " + " << C3.imag << "i" << endl;

    C3 = SubComplexNo(C1, C2);
    cout << "Subtraction: ";
    cout << C3.real << " + " << C3.imag << "i" << endl;

    C3 = MulComplexNo(C1, C2);
    cout << "Multiplication: ";
    cout << C3.real << " + " << C3.imag << "i" << endl;

    return 0;
}