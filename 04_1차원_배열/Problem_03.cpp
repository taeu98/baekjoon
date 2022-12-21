/* 04단계 [ 1차원 배열 ] */
// 제목 : 최소, 최대
// 문제 번호 :10818

#include "iostream"
using namespace std;

int main(void)
{
    int n;
    int min = 1000000;
    int max = -1000000;

    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i] < min)
            min = array[i];
        if (array[i] > max)
            max = array[i];
    }
    cout << min << " " << max << endl;
}