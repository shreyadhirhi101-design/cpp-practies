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
        cout<<"Profit is : "<<SP-CP;
    }

    else if(SP<CP){
        cout<<"Loss is : "<<CP-SP;
    }
    
    else{
        cout<<"No Profit No Loss";
    }
}