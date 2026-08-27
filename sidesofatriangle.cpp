#include<iostream>
using namespace std;
int main(){
   int a;
   cout<<"a : ";
   cin>>a;

   int b;
   cout<<"b : ";
   cin>>b;

   int c;
   cout<<"c : ";
   cin>>c;

   if((a+b)>c && (b+c)>a && (a+c)>b){
    cout<<"They are the sides of triangle";
   }
   else{
    cout<<"Not the side of triangle";
   }
}