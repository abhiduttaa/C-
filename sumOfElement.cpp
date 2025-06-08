#include<iostream>
using namespace std;

int main(){
    int n , a[100] , s=0;

    cout<<"Enter array Length =";
    cin>>n;
    for(int i =0 ; i<n;i++){
        cout<<"Enter "<<i+1<<"'st"<<" Array Element =";
        cin>>a[i];
    }

    for(int i =0 ; i<n;i++){
        s = s + a[i];
    }
    cout<<"Sum Of All Element is = "<< s ;

    cout<<endl;
    return 0;
}