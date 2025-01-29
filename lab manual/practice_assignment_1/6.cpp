#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p,r;
    cout<<"enter length"<<endl;
    cin>>p;
    cout<<"enter breadth"<<endl;
    cin>>r;
    if(p==0||r==0){
        cout<<"This is not a rectangle ";
        return 0;
    }else{
        cout<<"Area pf rectangle is "<<p*r<<endl;
        cout<<"Perimeter of rectangle "<<2*(p+r);
    }
}
