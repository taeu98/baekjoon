/* 09단계 [ 2차원 배열 ] */
// 제목 : 최댓값
// 문제 번호 : 2566

#include <iostream>
using namespace std;
int main()
{
    int N, M = 0;
    int M_ij[] = {0, 0};
    int arr[9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> N;
            if (N > M)
            {
                M = N;
                M_ij[0] = i;
                M_ij[1] = j;
            }
        }
    }
    cout << M << "\n"
         << M_ij[0] << ' ' << M_ij[1] << "\n";

    return 0;
}