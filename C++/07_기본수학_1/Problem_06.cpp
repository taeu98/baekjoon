/* 07단계 [ 기본수학 1 ] */
// 제목 : 부녀회장이 될테야
// 문제 번호 : 2775

#include <iostream>
using namespace std;

int main(void)
{
    int T, k, n;
    int i, j;

    int sum[15][15];
    for (i = 0; i <= 14; i++)
        sum[i][0] = 0;
    for (i = 0; i <= 14; i++)
        sum[0][i] = i;
    for (i = 1; i <= 14; i++)
        for (j = 1; j <= 14; j++)
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1];

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> k >> n;
        cout << sum[k][n] << '\n';
    }
}