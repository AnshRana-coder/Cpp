#include<iostream>
using namespace std;
int main(){
   string str;
   cout<<"Enter a word = ";
   getline(cin,str);
   int len = str.size();
   bool system = true;
   int i;
   for (i=0;i<len/2;i++){
       if ((str[i])!=(str[len-i-1])){
           system=false;
           break;
       }
   }
   system?cout<<"word is a palindrome":cout<<"Word is not a palindrome";
   for(int i=0; i<str.length(); i++){
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
           str[i]='$';
       }
   }
   cout<<endl<<"String after replacing characters by $ = "<<str;
   return 0;
}