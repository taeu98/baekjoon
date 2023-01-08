/* 07단계 [ 기본수학 1 ] */
// 제목 : ACM 호텔
// 문제 번호 : 10250

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, H, W, N, X, Y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> H >> W >> N;
        X = (N - 1) % H + 1;
        Y = (N - 1) / H + 1;
        cout << 100 * X + Y << "\n";
    }
}