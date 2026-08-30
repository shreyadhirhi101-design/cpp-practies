#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;
    int d;
    cout<<"d : ";
    cin>>d;
    for(int i=1;i<=2*n-1;i+=d)
    cout<<i<<" ";
}