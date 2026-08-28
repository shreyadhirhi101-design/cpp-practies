#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"a : ";
    cin>>a;
    int b;
    cout<<"b : ";
    cin>>b;
    
    int c;
    cout<<"c : ";
    cin>>c;
    
    if(a>c){ //c can never be greatest
        if(a>b){
            cout<<a<<" is greatest";
        }
        else{
            cout<<b<<" is greatest";
        }    
    }
    else{
        cout<<c<<" is greatest";
    }    
}