#include<iostream>
using namespace std;
int main(){
    int x = 3,y,z;
    y = x = 10; // solves from right to left
    z = x < 10; // "<" has more importance then "="
    cout<<x<<" "<<y<<" "<<z; 
}