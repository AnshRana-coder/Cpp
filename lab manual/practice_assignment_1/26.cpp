#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,i;
    cout<<"ENter i";
    cin>>n;
    i=0;
    int count=0;
    while(i<=n){
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        
        if(count!=1){
            cout<<i<<" ";
        }
        count=0;
        i++;
    }
    
    return 0;
}