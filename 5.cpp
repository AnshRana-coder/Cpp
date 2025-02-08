#include<iostream>
using namespace std;
int isPalindrome(int a){
    int b=0;
    int t=0;
    int c=a;
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
    if(c==b){
        cout<<"Yes it is s palindrome";
    }else{
        cout<<"No";
    }
}
int main(){
    int a;
    cout<<"Enter value of a\n";
    cin>>a;
    isPalindrome(a);
}