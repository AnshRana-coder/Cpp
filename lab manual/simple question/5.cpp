#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int flag;
    do {
        cout << "Enter Your Choice to find the area of a triangle:\n";
        cout << "1. Via base and height\n";
        cout << "2. Via three sides (Heron's formula)\n";
        cout << "3. Via trigonometry (two sides and angle between them)\n";
        cout << "4. Via coordinates\n";
        cout << "5. Exit\n";
        cin >> flag;

        switch (flag) {
            case 1: { 
                float base, height;
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                float area = 0.5 * base * height;
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 2: { 
                float a, b, c;
                cout << "Enter side a: ";
                cin >> a;
                cout << "Enter side b: ";
                cin >> b;
                cout << "Enter side c: ";
                cin >> c;
                float s = (a + b + c) / 2; 
                float area = sqrt(s * (s - a) * (s - b) * (s - c));
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 3: { 
                float a, b, angle;
                cout << "Enter side a: ";
                cin >> a;
                cout << "Enter side b: ";
                cin >> b;
                cout << "Enter angle between them (in degrees): ";
                cin >> angle;
                float radian = angle * (M_PI / 180);
                float area = 0.5 * a * b * sin(radian);
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 4: { 
                float x1, y1, x2, y2, x3, y3;
                cout << "Enter coordinates of first vertex (x1 y1): ";
                cin >> x1 >> y1;
                cout << "Enter coordinates of second vertex (x2 y2): ";
                cin >> x2 >> y2;
                cout << "Enter coordinates of third vertex (x3 y3): ";
                cin >> x3 >> y3;
                float area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 5: {
                cout << "Exiting the program..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (flag != 5);

    return 0;
}
