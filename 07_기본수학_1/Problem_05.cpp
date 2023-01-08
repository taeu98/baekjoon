/* 07단계 [ 기본수학 1 ] */
// 제목 : ACM 호텔
// 문제 번호 : 10250

#include <iostream>
using namespace std;

int main(void)
{
    int T, H, W, N, i, X, Y;
    cin >> T;
    for (i = 0; i < T; i++)
    {
        cin >> H >> W >> N;
        X = (N - 1) % H + 1;
        Y = (N - 1) / H + 1;
        cout << 100 * X + Y << "\n";
    }
}