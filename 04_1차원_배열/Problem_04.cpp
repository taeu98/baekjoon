/* 04단계 [ 1차원 배열 ] */
// 제목 : 최댓값
// 문제 번호 :2562

#include "iostream"
using namespace std;

int main(void)
{
    int max[2] = {0, 0};
    int array[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> array[i];
        if (array[i] > max[0])
        {
            max[0] = array[i];
            max[1] = i + 1;
        }
    }
    cout << max[0] << endl
         << max[1] << endl;
}