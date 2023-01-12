/* 10단계 [ 정렬 ] */
// 제목 : 통계학
// 문제 번호 : 2108

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /* 01) arr[] */
    int N, x;
    int arr[8001] = {0};
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        arr[x + 4000] += 1;
    }

    /* 02) a_1[] */
    int a_1[N][2] = {0};
    int c_1 = 0, m = 0;

    for (int i = 0; i < 8001; i++)
        if (arr[i])
        {
            a_1[c_1][0] = i - 4000;
            a_1[c_1][1] = arr[i];
            if (arr[i] >= m)
                m = arr[i];
            c_1++;
        }

    /* 03) a_2[] */
    int a_2[c_1] = {0};
    int c_2 = 0, sum = 0;

    for (int i = 0; i < c_1; i++)
    {
        sum += a_1[i][0] * a_1[i][1];
        if (a_1[i][1] == m)
            a_2[c_2++] = a_1[i][0];
    }

    /* 1 */
    cout << floor(0.5 + 1.0 * sum / N) << "\n";

    /* 2 */
    int c = 0;
    for (int i = 0; i < c_1; i++)
    {
        c += a_1[i][1];
        if (c >= (N + 1) / 2)
        {
            cout << a_1[i][0] << "\n";
            break;
        }
    }

    /* 3 */
    cout << ((c_2 > 1) ? a_2[1] : a_2[0]) << "\n";

    /* 4 */
    cout << a_1[c_1 - 1][0] - a_1[0][0] << "\n";
}