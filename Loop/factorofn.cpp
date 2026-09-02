#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%2==0){
            cout<<i<<" ";
            break; //to get out of loop
        }
    }
}