#include <iomanip>
#include <ios>
#include <iostream>
 
using namespace std;
int main()
{
    double num = 3.142857142857;
    cout << "Setting the precision using"
           << " setprecision to 9 : \n " 
         << setprecision(9);
    cout << num << endl;
    return 0;
}