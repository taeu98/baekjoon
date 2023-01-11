// 알람 시계
#include <iostream>
using namespace std;

int main(void)
{
    int h, m;
    cin >> h >> m;

    int time = 60 * h + m;
    time -= 45;

    if (time < 0)
        time += 60 * 24;

    h = time / 60;
    m = time % 60;

    cout << h << ' ' << m << endl;
}