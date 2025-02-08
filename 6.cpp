#include<iostream>
using namespace std;
int fabonacci(int n){
    int a = 0, b = 1, c;
    
    cout << "Fibonacci Series: " << a << " " << b << " ";
    
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}
int main(){
    int a;
    cout<<"Enter value of a\n";
    cin>>a;
    fabonacci(a);
}