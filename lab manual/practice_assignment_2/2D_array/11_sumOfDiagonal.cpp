#include<iostream>
#include<string>
using namespace std;
int main(){
   int arr[3][3],i,j;
   int arr2[2];
   cout<<"Provide array element";
   for(i=0;i<3;i++){
      for(j=0;j<3;j++)
         cin>>arr[i][j];
   }
   int sum=0;
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         if(i==j){
            sum=sum+arr[i][j];
         }
      }
   }
   cout<<"sum of primary diagonal element "<<sum<<endl;
   sum=0;
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         if((i+j)==2){
            sum=sum+arr[i][j];
         }
      }
   }
   cout<<"sum of secondary diagonal element "<<sum<<endl;
}