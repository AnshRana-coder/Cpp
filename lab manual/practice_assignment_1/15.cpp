#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x;
    x=(a^b +c&d);
    cout<<x;
    return 0;
}