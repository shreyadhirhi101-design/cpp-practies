#include<iostream>
using namespace std;
int main(){
    float a11;
    cout<<"a11 : ";
    cin>>a11;

    float a12;
    cout<<"a12 : ";
    cin>>a12;

    float a13;
    cout<<"a13 : ";
    cin>>a13;

    float a21;
    cout<<"a21 : ";
    cin>>a21;

    float a22;
    cout<<"a22 : ";
    cin>>a22;

    float a23;
    cout<<"a23 : ";
    cin>>a23;

    float a31;
    cout<<"a31 : ";
    cin>>a31;

    float a32;
    cout<<"a32 : ";
    cin>>a32;

    float a33;
    cout<<"a33 : ";
    cin>>a33;

    cout<<"Determinant : ";
    cout<<a11*(a22*a33-a32*a23)-a12*(a21*a33-a31*a23)+a13*(a21*a32-a31*a22);
}