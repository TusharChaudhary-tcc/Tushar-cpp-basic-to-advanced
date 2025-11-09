#include <bits/stdc++.h>
using namespace std;
int main(){
    // for(int i=1; i<=10; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==5){              // This is the use of 'break' statement. In this we break our loop at any number that we want
    //         break; 
    //     }
    // }
 

 
    for(int i=0; i<10; i++) 
    {
        if(i==5){              // This is the use of 'continue' statement. In this we can skip a number that we want like we skip 5.
            continue;
        }
        cout<<i<<endl;
     
    }


    return 0;
}
