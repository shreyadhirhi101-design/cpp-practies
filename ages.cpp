#include<iostream>
using namespace std;
int main(){
    int Ram;
    cout<<"Age of Ram : ";
    cin>>Ram;

    int Shyam;
    cout<<"Age of Shyam : ";
    cin>>Shyam;

    int Ajay;
    cout<<"Age of Ajay : ";
    cin>>Ajay;

    if(Ram<Shyam){
        if(Ram<Ajay){
            cout<<"Ram is Youngest";
        }
        else{
            cout<<"Ajay is youngest";
        }
    }
    if(Shyam<Ram){
        if(Shyam<Ajay){
            cout<<"Shyam is youngest";
        }
            else{
                cout<<"Ajay is youngest";
            }
        }
    }