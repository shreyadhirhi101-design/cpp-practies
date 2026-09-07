#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"x : ";
    cin>>x;
    int y;
    cout<<"y : ";
    cin>>y;
    cout<<x<<" "<<y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl;
}