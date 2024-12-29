// 0 1 1 2 3 5 8 13 21
#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int c;
    int n;
    cout<<"ENter the value of n";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}