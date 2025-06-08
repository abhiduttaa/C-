#include<iostream>
using namespace std;

int main(){
    int n ,r,s =0, p;
    cout<<"Enter a Number =";
    cin>>n;
    p=n;
    while (n>0)
    {
        r= n%10;
        s = s * 10 + r;
        n = n/10;
    }   

    if( s == p){
        cout<<"The Number is Palindrome "<<endl;
    }
    else{
        cout<<"The Number is Not a  Palindrome "<<endl;
    }

    // cout<<"Reverse Number is = ="<<s<<endl;
    return 0;

}               