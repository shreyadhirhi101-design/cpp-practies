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

    else if(SP<CP){
        cout<<"Loss";
    }
    
    else{
        cout<<"No Profit No Loss";
    }
}