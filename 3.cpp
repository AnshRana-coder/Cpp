#include<iostream>
using namespace std;
int reverseNumber(int a){
    int b=0;
    int t=0;
    if(a<=0){
        a=-a;
        t++;
    }
    while(a>0){
        b= b * 10 + (a % 10);
        a=a/10;
    }
    if(t==1){
        b=-b;
    }
    return b;
}
int main(){
    int a;
    cout<<"Enter value of a\n";
    cin>>a;
    cout<<reverseNumber(a);
}