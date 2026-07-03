#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int revNum=0;
    while(num>0){
        int rem=num%10;
        revNum= (revNum*10) +rem;

        num/=10;
    }
    cout<<revNum<<endl;
}