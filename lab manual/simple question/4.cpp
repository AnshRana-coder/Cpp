// F to C
#include<iostream>
using namespace std;
int main(){
    float f,c;
    int flag;
    do{
        cout<<"\nEnter 1 for fahrenheit to celsius conversion\nEnter 2 for Celsius to fahrenheit\nEnter 3 for Exit";
        cin>>flag;
        if(flag==1){
            cout<<"Enter fahrenheit:";
            cin>>f;
            c=(f- 32) *(float) 5/9;
            cout<<"\nits celsius conv is:"<<c;
        }else if(flag==2){
            cout<<"Enter celsius:";
            cin>>c;
            f=(9*c/5)+32;
            cout<<"\nits fahrenheit conv is:"<<f;
        }
    }while(flag!=3);
}