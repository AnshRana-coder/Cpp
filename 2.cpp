#include <iostream>
using namespace std;
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;

   int arr[n]; 
   
   for (int i = 0; i < n; i++) {
       cout << "Enter element " << i << ": "<<endl;
       cin >> arr[i];
   }
 
   cout << "Stored elements: ";
   for (int i = 0; i < n; i++) {
       cout << arr[i] << " ";
   }
   cout << endl;
   
   cout<<"reverse element ";
   for (int i = n-1; i >=0; i--) {
       cout << arr[i] << " ";
   }
   cout<< endl;
   for (int i = 0; i < n ; i++) { 
       for (int j = i+1; j < n ; j++) { 
           if (arr[i] > arr[j]) { 
               int x=0;
               x=arr[i];
               arr[i]=arr[j];
               arr[j]=x;
           }
       }
   }

   cout<<"2nd maximum element is "<<arr[n-2]<<endl;
   cout<<"2nd min wlwmwnr is"<<arr[1];

   return 0;
}