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
    int max=arr[1];
    int min=arr[1];
    for (int i = 0; i < n; i++) {
        if(max<=arr[i]){
            max=arr[i];
        }
        if(min>=arr[i]){
            min=arr[i];
        }
    }
    cout <<"Max value is: "<<max<<endl<<"Min value is: "<<min;
    

    return 0;
}
