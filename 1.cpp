#include<iostream>
using namespace std;
int maxNumber(int a , int b){
    if(a>b){
        cout<<a<<"is larger";
    }else{
        cout<<b<<"is larger";
    }
}
int main(){
    int a,b;
    cout<<"Enter value of a and b\n";
    cin>>a>>b;
    maxNumber(a,b);
}