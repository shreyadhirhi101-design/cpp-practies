#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;
    int b;
    cout<<"b : ";
    cin>>b;
    // int d;
    // cout<<"d : ";
    // cin>>d;
    int a = 4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a + b;
    }
}