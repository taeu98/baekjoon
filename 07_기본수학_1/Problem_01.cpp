/* 07단계 [ 기본수학 1 ] */
// 제목 : 손익분기점
// 문제 번호 : 1712

#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c, x;
    cin >> a >> b >> c;
    if (b >= c)
        x = -1;
    else
        x = a / (c - b) + 1;
    cout << x << "\n";
    return 0;
}