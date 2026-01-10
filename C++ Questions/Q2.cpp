#include <bits/stdc++.h>
using namespace std;

//       Calculate Sum of digits of a number.

// long SumOfDigits(long num){
//     long digitSum=0;
//     while(num>0){
//         long lastDigit=num%10;
//         num= num/10;
//         digitSum+=lastDigit;
//     }
//     cout<<digitSum;
// }
// int main() {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     SumOfDigits(n);
//     return 0;
// }




// // Swapping two numbers using call by reference
// void swap(int &x, int &y){
//     int temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int x=45;
//     int y=20;
//     cout << "Before Swapping: "; 
//     cout << "x: " << x << ", y: " << y << endl;
//     swap(x, y);
//     cout << "After Swapping: "; 
//     cout << "x: " << x << ", y: " << y << endl;
//     return 0;
// }




// int main(){
//     char f_name[20];
//     char l_name[20];
//     char full_name[50];
//     cout<<"Enter first name: ";
//     cin>>f_name;
//     cout<<"Enter last name: ";
//     cin>>l_name;
//     cout<<"Hi "<<f_name<<"! Your name has "<<strlen(f_name)<<" characters."<<endl<<"And your last name has "<<strlen(l_name)<<" characters."<<endl;
//     strcpy(full_name, f_name);
//     strcat(full_name, " ");
//     strcat(full_name, l_name);
//     cout<<"Your Full name is : "<<full_name<<endl;
//     cout<<strlen(full_name)<<endl;
//     if((strcmp(f_name, l_name))==0){
//         cout<<"Both string are equal."<<endl;
//     }
//     else{
//         cout<<"Both strings are not equal."<<endl;
//     }
// }

// int main(){
    // string str1 = {"Hello"};
    // string str2 = "Tushar";
    // string str3 {"Chaudhary"};
    // string str4 ={str2};
    // string str5 (7,'a');
    // cout<<str1<<endl;
    // cout<<str2<<endl;
    // cout<<str3<<endl;
    // cout<<str4<<endl;
    // cout<<str5<<endl;

    // string st1={"Tushar Chaudhary"};
    // string st2 (st1, 7);
    // string st3 ("Tushar Chaudhary", 7);
    // cout<<st2<<endl;
    // cout<<st3<<endl;

    // string str={"Welcome Home"};
    // cout<<str[6]<<endl;
    // cout<<str.at(8)<<endl;

    // string st4={"Tushar Chaudhary"};
    // for(char c: st4){
    //     cout<<c;
    // }

    // string s1={"Tushar"};
    // string s2="Chaudhary";
    // cout<<s1+s2<<endl;
    // cout<<s1.append(s2)<<endl;
    // cout<<s1+" "+s2+ " "+"Joy"<<endl;
    // cout<<"Length of String : "<<s1.length()<<endl;
    // if((s1.compare(s2))==0){
    //     cout<<"String Matched"<<endl;
    // }
    // else{
    //     cout<<"String not matched"<<endl;
    // }
    // cout<<s2.substr(3,4)<<endl;
    // cout<<s2.substr(3)<<endl;


    // string s3="Tushar Chaudhary! You are enjoying";
    // cout<<s3.find("ar")<<endl;
    // cout<<s3.find("ar", 8)<<endl;
    // cout<<s3.rfind("ar")<<endl;
    // cout<<s3.insert(6, " Hero")<<endl;
    // cout<<s3.replace(0,6, "Sonu")<<endl;
    // cout<<s3.erase(4,5)<<endl;

//     int a=1023;
//     string s=to_string(a);
//     cout<<s<<endl;

//     return 0;
// }




void checkArm(int num){
    int original=num;
    int sum=0;

    // count digits
    int digits=0;
    int temp=num;
    while(temp>0){
        digits++;
        temp/=10;
    }
    temp=num;

    // Armstrong logic
    while(temp>0){
        int rem=temp%10;
        sum+= (int)pow(rem, digits);
        temp/=10;
    }
    if(sum==original){
        cout<<"An Armstrong"<<endl;
    }
    else{
        cout<<"Not a Armstrong"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    checkArm(n);
    return 0;
}