#include <iostream>
using namespace std;

#define PI 3.1415926535897932

int main()
{
    double r;
    cin >> r;

    cout << fixed;
    cout.precision(6);
    cout << r * r * PI << "\n"
         << 2 * r * r << "\n";
}