#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int temp=num;

    int count=0;
    while(num>0){
        count++;
        num/=10;
    }
    cout<<count<<endl;

    num=temp;

    //Short Mehtod to count digits of a number
    int count1= (int)(log10(num) +1);
    cout<<count1<<endl;

}