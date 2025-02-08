#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int m,n,i,j;
    cout<<"Enter no. of rows in a matrix = ";
    cin>>m;
    cout<<"Enter no. of columns in a matrix = ";
    cin>>n;
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"Element at index "<<i<<j<<" ";
            cin>>arr[i][j];
        }
    }
    cout<<"Your matrix is = "<<endl;
    for(i=0;i<m;i++){
        cout<<endl;
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl<<"After 90degree rotation matrix is = "<<endl;
    for(j=0;j<n;j++){
        cout<<endl;
        for(i=m-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}