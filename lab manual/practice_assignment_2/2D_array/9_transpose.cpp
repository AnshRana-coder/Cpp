#include<iostream>
#include<string>
using namespace std;
int main(){
   int arr[3][3],i,j;
   cout<<"Provide array element";
   for(i=0;i<3;i++){
      for(j=0;j<3;j++)
         cin>>arr[i][j];
   }
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         cout<<"  "<<arr[j][i];
      }
      cout<<endl;
   }
}