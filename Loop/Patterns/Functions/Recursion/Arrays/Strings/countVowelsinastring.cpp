#include <iostream>
using namespace std;
int main(){
    string s = "He is a good Boy and you are a good girl"; 
    int count = 0;
    for(int i=0;i<=s.length();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    cout<<count++;
}