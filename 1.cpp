#include <iostream>
using namespace std;

int main() {
   int num,temp; 
   
   cout << "Enter a positive integer: ";
   cin >> num;
   temp=num;

   if (num < 2) {
       cout << "Given number is not prime" << endl;
       return 0;
   }

   int prime = 1; 

   for (int i = 2; i <= num / 2; i++) {
       if (num % i == 0) {
           prime = 0;
           goto system;
           break; 
       }
   }

   if (prime) {
       cout << "Yes! " << num << " is a prime number." << endl;
       int nxtprime=num+1;
       while (true) {
           int isPrime = 1; 
           for (int i = 2; i <= nxtprime / 2; i++) {
               if (nxtprime % i == 0) {
                   isPrime = 0; 
                   break;
               }
           }
           if (isPrime) {
               cout << "The next prime number after " << temp << " is: " << nxtprime << endl;
               break; 
           }
           nxtprime++; 
       }

   } else {
       system:
       cout << "No, " << num << " is not a prime number and its factor  are : " << endl;
       for (int i = 1; i <= num; i++) {
       if (num % i == 0) {
           cout<<i<<" ";
       }
   }

   }

   return 0;
}