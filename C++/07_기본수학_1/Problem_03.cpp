/* 07단계 [ 기본수학 1 ] */
// 제목 : 분수찾기
// 문제 번호 : 1193

#include <iostream>
using namespace std;
int main(void)
{
    int a, b = 1;
    int x, y;
    cin >> a;
    while (2 * a > b * (b + 1))
        b++;
    x = a - (b - 1) * b / 2;
    y = b + 1 - x;
    (b % 2) ? cout << y << '/' << x << "\n" : cout << x << '/' << y << "\n";
}