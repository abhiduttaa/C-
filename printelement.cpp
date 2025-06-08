#include<iostream>
using namespace std;

int main(){
    int n =5;
    int a [5] ={1,2,3,4,5};
    
    cout<< "Using classical For Loop"<<endl;
    for (int i = 0; i <n; i++)
    {
        cout << a[i]<<endl;
    }
    cout<< "Using ForEach Loop"<<endl;
    for(int i : a){
        cout<< i<<endl;
    }
    
    return 0;
}