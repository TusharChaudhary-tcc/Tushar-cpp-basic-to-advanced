#include <bits/stdc++.h>
using namespace std;

struct Time{
    int h;
    int m;
    int s;

};

int main(){
    // struct Time T1={11,44,23}, T2={43,32,58}, T3;
    struct Time T1, T2, T3;
    cout<<"Enter the time 1 : ";
    cin>>T1.h>>T1.m>>T1.s;
    
    cout<<"Enter the time 2 : ";
    cin>>T2.h>>T2.m>>T2.s;

    int x,y,z,C=0;
    x=T1.s+T2.s+C;
    C=x/60;
    x=x%60;

    y=T1.m+T2.m+C;
    C=y/60;
    y=y%60;

    z=T1.h+T2.h+C;

    T3.s=x;
    T3.m=y;
    T3.h=z;

    cout<<T3.h<<" :: "<<T3.m<<" :: "<<T3.s<<endl;

}