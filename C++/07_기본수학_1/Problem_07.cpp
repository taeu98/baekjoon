/* 07단계 [ 기본수학 1 ] */
// 제목 : 설탕 배달
// 문제 번호 : 2839

#include <iostream>
using namespace std;

int main(void)
{
    int N, V5, V3;
    cin >> N;
    V5 = int(N / 5);
    V3 = int((N - V5 * 5) / 3);
    while (V5 >= 0 && N - V5 * 5 - V3 * 3)
        V3 = int((N - --V5 * 5) / 3);
    if (V5 < 0)
        cout << -1 << "\n";
    else
        cout << V5 + V3 << "\n";
}