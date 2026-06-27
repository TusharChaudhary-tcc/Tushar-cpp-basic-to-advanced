#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"* "<<" ";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* "<<" ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print7(int n){
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        // star
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        // space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print8(int n){
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //stars
        for(int k=0; k<2*n-2*i-1; k++){
            cout<<"*";
        }
        for(int l=0; l<i; l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print10(int n){
    for(int i=0; i<=2*n-1; i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int n){
    int start=1;
    for(int i=0; i<n; i++){
        if(i%2==0) start=1;
        else start=0;

        for(int j=0; j<=i; j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}
void print12(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //spaces
        for(int k=1; k<=2*n-2*i; k++){
            cout<<" ";
        }
        for(int l=i; l>=1; l--){
            cout<<l;
        }
        cout<<endl;
    }
}
void print13(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void print14(int n){
    // Method 1
    for(int i=1; i<=n; i++){
        char ch='A';
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    // Method2
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print15(int n){
    // Method 1
    for(int i=0; i<n; i++){
        char ch='A';
        for(int j=0; j<n-i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    // Method2
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+n-i-1; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print16(int n){
    for(int i=0; i<n; i++){
        char ch='A'+i;
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print17(int n){
    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //characters
        char ch='A';
        int breakpoints=(2*i+1)/2;
        for(int k=1; k<=2*i+1; k++){
            cout<<ch;
            if(k<=breakpoints) ch++;
            else ch--;
        }
        cout<<endl;

    }
}
void print18(int n){
    for(int i=0; i<n; i++){
        for(char ch='E'-i; ch<='E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print19(int n){
        for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        //spaces
        for(int k=1; k<=2*i; k++){
            cout<<" ";
        }
        
        for(int l=1; l<=n-i; l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        //spaces
        for(int k=1; k<=2*n-2*i; k++){
            cout<<" ";
        }
        
        for(int l=1; l<=i; l++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print20(int n){
    int spaces=2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars=i;
        if(i>n) stars=2*n -i;
        //stars
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        //spaces
        for(int k=1; k<=spaces; k++){
            cout<<" ";
        }
        //stars
        for(int l=1; l<=stars; l++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
}
void print21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
void print22(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"4 ";
            }
            else if(i==1 || i==n-2 || j==1 || j==n-2){
                cout<<"3 ";
            }
            else if(i==2 || i==n-3 || j==2 || j==n-3){
                cout<<"2 ";
            }
            else {
                cout<<"1 ";
            }

        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    print22(n);
}