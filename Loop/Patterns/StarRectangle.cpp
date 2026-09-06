#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Number of Rows: "; //no of rows
    cin>>m;
    int n;
    cout<<"Number of Cols : "; //no of cols
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}