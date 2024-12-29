// print n prime no ... 2 3 5 7 
#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"ENter the value of n";
      cin>>n;
      int count;
      cout<<"prime no till the range are : ";
      for(int i=2;i<n;i++){
        for(int j=2;j<=n/2;j++){  
            if(i%j==0){
              count=0;
              break;
            }else{
              count++;
            }
        }
        if(count!=0){
            cout<<i<<" ";
        }
      }
}