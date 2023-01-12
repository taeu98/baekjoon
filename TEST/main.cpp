/* 10단계 [ 정렬 ] */
// 제목 : 통계학
// 문제 번호 : 2108

#include <iostream>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x;
    int arr[1000000] = {0};

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        arr[x - 1] += 1;
    }

    for (int i = 0; i < 1000000; i++)
        if (arr[i])
            for (int j = 0; j < arr[i]; j++)
                cout << i + 1 << "\n";
}