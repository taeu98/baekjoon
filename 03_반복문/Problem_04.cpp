// 영수증
#include "iostream"
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int n;
    cin >> n;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        t -= x * y;
    }
    cout << (t ? "No" : "Yes") << endl;
}