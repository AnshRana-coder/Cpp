#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side = ";
    cin>>a;
    cout<<"Enter 2nd side = ";
    cin>>b;
    cout<<"Enter 3rd side = ";
    cin>>c;
    if((a==b)&&(b==c)&&(a==c)){
        cout<<"Triangle is equilateral";
    }else if((a==b)&&(b==a)&&(a!=c)){
        cout<<"Triangle is isosceles";
    }else if((a==c)&&(b!=c)&&(a==c)){
        cout<<"Triangle is isosceles";
    }else if((a!=b)&&(b==c)&&(b==c)){
        cout<<"Triangle is isosceles";
    }else if((a!=b)&&(b!=c)&&(a!=c)){
        cout<<"Triangle is scalene";
    }
    return 0;
}