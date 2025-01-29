#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
  
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    cout<<"enter c"<<endl;
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"a is greatest";
        }else{
            cout<<"b is greatest";
        }
    }else if(b>a){
        if(b>c){
            cout<<"b is greatest";
        }else {
            cout<<"c is greatest";
        }

        
    }
}
   