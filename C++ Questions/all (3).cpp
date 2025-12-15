#include <bits/stdc++.h>
using namespace std;

// To find the sum of two numbers
// double sum(double p, double q){
//     double c=p+q;
//     return c;
// }
// int main() {
//   cout<<sum(20.99, 30.23)<<endl;
// //   cout<<c;
   
//   return 0;
// }



// To find Min of Two numbers
// int minOfTwo(int a, int b){
//     if(a<b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main (){
    
//     cout<<minOfTwo(10, 13)<<endl;
// }



// To find the Sum of n numbers
// int sumN(int n){
//     int sum=0;
    
//     for(int i=0; i<=n; i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main(){
//     cout<<sumN(10)<<endl;
// }



// To find the factorials of N numbers
int factN(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int main (){
    cout<<factN(5)<<endl;
    

}




















