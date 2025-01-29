#include <iostream>
using namespace std;
int main(){
    int i,j;
    cout<<"enter 2 no.";
    cin>>i>>j;
    cout<<"Enter 1 for add\nEnter 2 for sub\nEnter 3 for multiply\nEnter 4 fir div\n";
    int x;
    cin>>x;
    switch(x){
        case 1: cout<<i<<"+"<<j <<"="<<(i+j);
                break;
        case 2: cout<<i<<"-"<<j <<"="<<(i-j);
                break;
        case 3: cout<<i<<"*"<<j <<"="<<(i*j);
                break;
        case 4: cout<<i<<"/"<<j <<"="<<(i/j);
                break; 
        default: cout<<"ENter a valid choicr";
                break;
    }

    

}

