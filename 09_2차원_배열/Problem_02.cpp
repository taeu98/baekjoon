/* 09단계 [ 2차원 배열 ] */
// 제목 : 행렬 덧셈
// 문제 번호 : 2738

#include <iostream>
using namespace std;
int main()
{
    int D, M[3] = {0, 0, 0};
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            cin >> D;
            if (D >= M[0])
            {
                M[0] = D;
                M[1] = i + 1;
                M[2] = j + 1;
            }
        }
    cout << M[0] << "\n"
         << M[1] << ' ' << M[2];
}