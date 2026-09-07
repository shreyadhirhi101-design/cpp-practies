#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of Cols : "; //no of cols
    cin>>n;
    int mid = n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==mid || j==mid) cout<<"* ";
            else cout<<"# ";
        }
        cout<<endl;
    }
}