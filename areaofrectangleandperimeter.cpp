#include<iostream>
using namespace std;
int main(){
    float l;{
        cout<<"Length : " ;
    cin>>l;
    }
    float b;{
        cout<<"Breadth : " ;
    cin>>b;
    }
    float x;{
        cout<<l+b;
    }
    float A;{
        cout<<"Area of rectangle : "<<l*b<<endl;
    }
    float P;{
        cout<<"Perimeter : "<<x*2<<endl;
    }
    if(A>P){
        cout<<"Area of Rectangle is Greater then Perimeter";
    }
    else{
        cout<<"Area of Rectangle is less then perimeter";
    }
}