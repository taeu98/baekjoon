// A+B - 5
#include "iostream"
using namespace std;

int main(void)
{
    int x, y;
    while (true)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
            break;
        else
            cout << x + y << endl;
    }
}