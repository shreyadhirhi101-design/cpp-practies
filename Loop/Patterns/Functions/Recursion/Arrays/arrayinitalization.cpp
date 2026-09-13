#include <iostream>
using namespace std;
int main(){
    int arr[5] = {4, 5, 6, 2, 0};
    arr[0] = 13;
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}