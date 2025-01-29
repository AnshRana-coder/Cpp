#include <iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter a no.";
    cin>>i;
    int count=0;
     while (i > 0) {  
            if (i & 1) {  
                count++;
            }
            i = i >> 1; 
    }
    cout<<count;
}

