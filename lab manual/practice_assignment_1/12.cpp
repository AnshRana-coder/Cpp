#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c,r;
    cin>>a>>b>>c;
    r=(b*b)-(4*a*c);
    if(r>0){
        cout<<"roots are real and distinct";
    }else if(r=0){
        cout<<"roots are real and equal";
    }else{
        cout<<"roots are imaginary";
    }
    return 0;
}