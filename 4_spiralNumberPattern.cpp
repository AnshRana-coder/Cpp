#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    int arr[n][n];
    int num=1,r=0,c=0;
    int lr=n-1,lc=n-1;
    while(r<=lr&&c<=lc){
        for(int i=c;i<=lc;i++){
            arr[r][i]=num++;
        }r++;
        for(int i=r;i<=lr
            ;i++){
            arr[i][lc]=num++;
        }lc--;
        for(int i=lc;i>=c;i--){
            arr[lr
            ][i]=num++;
        }lr--;
        for(int i=lr
            ;i>=r;i--){
            arr[i][c]=num++;
        }c++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"   ";
        }cout<<endl;
    }
    return 0;
}