// 더하기 사이클
#include "iostream"
using namespace std;

int main(void)
{
    int x, y, cnt = 0;
    cin >> x;
    y = x;
    while (x != y || cnt == 0)
    {
        y = (y % 10 * 10) + (y % 10 + y / 10) % 10;
        cnt++;
    }
    cout << cnt << endl;
}