/* 04단계 [ 1차원 배열 ] */
// 제목 : 평균은 넘겠지
// 문제 번호 :4344

#include "iostream"
using namespace std;

int main(void)
{
    int N;
    int n;
    int v;
    float cnt = 0;
    float a = 0;

    cin >> N;
    for (int j = 0; j < N; j++)
    {
        cin >> n;
        int array[n];

        for (int i = 0; i < n; i++)
        {
            cin >> v;
            array[i] = v;
            a += v;
        }

        a /= n;

        for (int i = 0; i < n; i++)
            if (array[i] > a)
                cnt++;

        cout << fixed;
        cout.precision(3);
        cout << cnt / n * 100 << '%' << endl;

        a = 0;
        cnt = 0;
    }
}