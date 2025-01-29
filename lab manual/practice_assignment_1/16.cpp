#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x;
    x=((a ^ b) >> 31) & 1;
    if(x){
        cout<<"They are opp in sign";
    }else{
        cout<<"same sign";
    }
    return 0;
}