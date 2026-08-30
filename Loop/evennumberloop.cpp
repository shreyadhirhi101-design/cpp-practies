#include<iostream>
using namespace std;
int main(){
    // for(int i=19;i<=190;i++){ //loop work 172 times 
    //     if(i%19==0){
    //         cout<<i<<" ";
    //     }  
    // }
    for(int i=19;i<=190;i+=19){ //loop work only 10 times
        cout<<i<<" ";    
    }
}