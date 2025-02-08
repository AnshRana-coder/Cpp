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
    int x;
    cout<<"Enter the element to find"<<endl;
    cin>>x;
    int y=0;
    if(x==arr[n/2]){
        cout<<"index is "<<n/2;
        y++;
        
    }else if(x<arr[n/2]){
        for(int i=0;i<=n/2;i++){
            if(arr[i]==x){
                cout<<"element is at "<<i+1<<"th poisition";
                y++;
                break;
            }
        }
    }else if(x>arr[n/2]){
        for(int i=n/2;i<=n;i++){
            if(arr[i]==x){
                cout<<"element is at "<<i+1<<"th poisition";
                y++;
                break;
            }
        }
    }
    if(y==0){
        cout<<"Does not exist in the array";
    }

    return 0;
}
