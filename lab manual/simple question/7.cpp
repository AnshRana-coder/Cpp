#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter side a"<<endl;
    cin>>a;
    cout<<"enter side b"<<endl;
    cin>>b;
    cout<<"enter side c"<<endl;
    cin>>c;
    float s;
    s=(float)(a+b+c)/2;
    float area;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area is"<<area;
}
