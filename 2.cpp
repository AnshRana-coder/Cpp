#include<iostream>
using namespace std;
int factorial(int a){
    int fac=1;
    for(int i=1;i<=a;i++){
        fac=fac*i;
    }
    return(fac);
}
int main(){
    int a;
    cout<<"Enter value of a\n";
    cin>>a;
    cout<<factorial(a);
}