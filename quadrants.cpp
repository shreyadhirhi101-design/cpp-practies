#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"x : ";
    cin>>x;

    int y;
    cout<<"y : ";
    cin>>y;

    if(x>0 and y>0){
        cout<<"1st Quadrant";
    }
    if(x<0 and y>0){
        cout<<"2nd Quadrant";
    }
    if(x<0 and y<0){
        cout<<"3rd Quadrant";
    }
    if(x>0 and y<0){
        cout<<"4th Quadrant";
    }
    if(x==0 and y==0){
        cout<<"origin";
    }
}