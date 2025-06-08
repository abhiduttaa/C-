#include<iostream>
using namespace std;

int main(){
    int n , a[100];

    cout<<"Enter array Length =";
    cin>>n;
    for(int i =0 ; i<n;i++){
        cout<<"Enter "<<i+1<<"'st"<<" Array Element =";
        cin>>a[i];
    }
    cout<<"--- The Given Array is ---"<<endl;
    for(int i =0 ; i<n;i++){
        cout<<a[i]<< "   ";        
    }
    cout<<endl;
    return 0;
}