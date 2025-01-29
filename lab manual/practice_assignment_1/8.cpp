#include <iostream>
using namespace std;
int main(){
    string str;
    int age;
    cout<<"Enter your name"<<endl;
    getline(cin,str);
    cout<<"Enter your age"<<endl;
    cin>>age;
    cout<<"Hello "<<str<<" Your age is "<<age*365<<"NICE TO MEET YOU"<<endl;
}

