#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p,r,t,n;
    cout<<"enter p"<<endl;
    cin>>p;
    cout<<"enter r"<<endl;
    cin>>r;
    cout<<"enter t"<<endl;
    cin>>t;
    cout<<"enter n"<<endl;
    cin>>n;
    if (n <= 0) {
        cout << "Error: N must be greater than 0." << endl;
        return 1;
    }
    float amount;
    amount=p*(pow(1+r/n,n*t));
    cout<<"CI is "<<(amount-p)<<endl;
    
    
}
