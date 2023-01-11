/* 04단계 [ 1차원 배열 ] */
// 제목 : 평균
// 문제 번호 :1546

#include "iostream"
using namespace std;

int main(void)
{
    int n;
    int v;
    int max = 0;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        if (v > max)
            max = v;
        sum += v;
    }
    cout << 100 * sum / max / n << endl;
}