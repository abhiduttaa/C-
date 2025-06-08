#include<iostream>
using namespace std;

int main(){
    int n,f=1;
    cout<<"Enter a Number =";
    cin>>n;
    int a = n;
    while (n>0)
    {
        f = f* n;
        n--;        
    }
    
    cout<<"Factorial of "<< a << " is = " << f << endl;
    return 0;

}