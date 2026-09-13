#include <iostream>
using namespace std;
int main(){
    int arr[] = {4, 5, 6, 2, 0};
    int sum = 0;
    for(int i=0;i<=4;i++){
        sum += arr[i];
    }
    cout<<sum;
}