// 오븐 시계
#include <iostream>
using namespace std;

int main(void)
{
    int h, m, x;
    cin >> h >> m >> x;

    int time = 60 * h + m;
    time += x;

    time %= 60 * 24;

    h = time / 60;
    m = time % 60;

    cout << h << ' ' << m << endl;
}