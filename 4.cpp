#include<iostream>
using namespace std;
int sumOfdigits(int a){
    int b=0;
    int t=0;
    
    while(a>0){
        b=b+a%10;
        a=a/10;
    }
    
    return b;
}
int main(){
    int a;
    cout<<"Enter value of a\n";
    cin>>a;
    cout<<sumOfdigits(a);
}