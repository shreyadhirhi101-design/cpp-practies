#include<iostream>
using namespace std;
int main(){
    int a;{
        cout<<"a : ";
        cin>>a;
    }
    int b;{
        cout<<"b : ";
        cin>>b;
    }
    int c;{
        cout<<"c : ";
        cin>>c;
    }

    if(a>b && a>c){
        cout<<"a is greatest";
    }
    if(b>a && b>c){
        cout<<"b is greatest";
    }
    if(c>a && c>b){
        cout<<"c is greatest";
    }
}