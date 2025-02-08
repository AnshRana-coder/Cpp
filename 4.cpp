#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    int arr[n][n];
    int num=1,row=0,col=0;
    int lastrow=n-1,lastcol=n-1;
    while(row<=lastrow&&col<=lastcol){
        for(int i=col;i<=lastcol;i++){
            arr[row][i]=num++;
        }row++;
        for(int i=row;i<=lastrow;i++){
            arr[i][lastcol]=num++;
        }lastcol--;
        for(int i=lastcol;i>=col;i--){
            arr[lastrow][i]=num++;
        }lastrow--;
        for(int i=lastrow;i>=row;i--){
            arr[i][col]=num++;
        }col++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}