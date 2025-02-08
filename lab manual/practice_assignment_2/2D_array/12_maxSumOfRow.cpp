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
         sum=sum+arr[i][j];
         arr2[i]=sum;

      }
      sum=0;
   }
   int max=arr2[0];
   for(i=0;i<3;i++){
      if(arr2[i]>max){
         max=arr2[i];
      }
   }
   cout<<"max sum of row"<<max<<endl;
}