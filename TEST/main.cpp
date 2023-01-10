/* 09단계 [ 2차원 배열 ] */
// 제목 : 행렬 덧셈
// 문제 번호 : 2738

#include <iostream>
using namespace std;
int main()
{
    int x, n1, n2;
    cin >> n1 >> n2;
    int arr[n1][n2];

    for (int i1 = 0; i1 < n1; i1++)
        for (int i2 = 0; i2 < n2; i2++)
            arr[i1][i2] = 0;

    for (int i = 0; i < 2; i++)
        for (int i1 = 0; i1 < n1; i1++)
            for (int i2 = 0; i2 < n2; i2++)
            {
                cin >> x;
                arr[i1][i2] += x;
            }

    for (int i1 = 0; i1 < n1; i1++)
    {
        for (int i2 = 0; i2 < n2; i2++)
            cout << arr[i1][i2] << " ";
        cout << endl;
    }
}