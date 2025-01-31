#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 
    
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    
    cout << "Stored elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout<<"reverse element";
    for (int i = 0; i <= n; i++) {
        cout << arr[n-i] << " ";
    }
    

    return 0;
}
