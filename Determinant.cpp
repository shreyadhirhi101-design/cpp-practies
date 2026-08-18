#include<iostream>
using namespace std;
int main(){
    int a11;
    cout<<"a11 : ";
    cin>>a11;

    int a12;
    cout<<"a12 : ";
    cin>>a12;

    int a13;
    cout<<"a13 : ";
    cin>>a13;

    int a21;
    cout<<"a21 : ";
    cin>>a21;

    int a22;
    cout<<"a22 : ";
    cin>>a22;

    int a23;
    cout<<"a23 : ";
    cin>>a23;

    int a31;
    cout<<"a31 : ";
    cin>>a31;

    int a32;
    cout<<"a32 : ";
    cin>>a32;

    int a33;
    cout<<"a33 : ";
    cin>>a33;

    cout<<"Determinant : ";
    cout<<a11*(a22*a33-a32*a23)-a12*(a21*a33-a31*a23)+a13*(a21*a32-a31*a22);
}