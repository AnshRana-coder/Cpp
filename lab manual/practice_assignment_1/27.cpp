#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x, y, z = 0, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    x = n;

 
    while (n > 0) {
        n /= 10;
        count++;
    }

    n = x; 
    while (n > 0) {
        y = n % 10;
        z += pow(y, count);
        n /= 10;
    }
    if (z == x) {
        cout << x << " is an Armstrong number." << endl;
    } else {
        cout << x << " is not an Armstrong number." << endl;
    }

    return 0;
}
