#include<iostream>
using namespace std;

int main(){
    int n ,r,s =0;
    cout<<"Enter a Number =";
    cin>>n;
    while (n>0)
    {
        r= n%10;
        s = s * 10 + r;
        n = n/10;
    }   

    cout<<"Reverse Number is = ="<<s<<endl;
    return 0;

}               