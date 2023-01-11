/* 09단계 [ 2차원 배열 ] */
// 제목 : 행렬 덧셈
// 문제 번호 : 2738

#include <iostream>
using namespace std;
int main()
{
    bool arr[100][100] = {false};
    int N, x, y, cnt = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        for (int j = x; j < 10 + x; j++)
            for (int k = y; k < 10 + y; k++)
                arr[j][k] = true;
    }
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            if (arr[i][j])
                cnt++;
    cout << cnt << "\n";
}