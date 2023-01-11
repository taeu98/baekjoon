/* 07단계 [ 기본수학 1 ] */
// 제목 : 벌집
// 문제 번호 : 2292

#include <iostream>
using namespace std;

int main(void)
{
    int a, n = 1;
    cin >> a;
    for (int i = 1; 3 * i * (i - 1) + 1 < a; i++)
        n++;
    cout << n << "\n";
    return 0;
}