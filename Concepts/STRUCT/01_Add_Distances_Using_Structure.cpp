#include <bits/stdc++.h>
using namespace std;

struct distance{
    int km;
    int m;

};

int main(){
    struct distance d1={7,92}, d2={14,950}, d3{21,460}, d4;
    int x,c;
    x=d1.m + d2.m + d3.m;
    c=x/1000;
    d4.m=x%1000;

    d4.km=c + d1.km + d2.km + d3.km;
    cout<<d4.km<<" km "<<d4.m<<" m";
}   