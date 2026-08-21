#include<iostream>
using namespace std;
int main(){
    int SP;
    cout<<"Enter SP : ";
    cin>>SP;

    int CP;
    cout<<"Enter CP : ";
    cin>>CP;

    if(SP>CP){
        cout<<"Profit";
    }

    if(SP<CP){
        cout<<"Loss";
    }
    
    if(SP==CP){
        cout<<"No Profit No Loss";
    }
}