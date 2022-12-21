// A+B - 8
#include "iostream"
using namespace std;

int main(void)
{
    int n;
    int x, y;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        cout << "Case #" << i << ": " << x << " + " << y << " = " << x + y << endl;
    }
}