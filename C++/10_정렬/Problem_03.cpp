/* 10단계 [ 정렬 ] */
// 제목 : 커트라인
// 문제 번호 : 25305

#include <iostream>
using namespace std;
int main()
{
    int N, S, cnt = 0;
    cin >> N >> S;
    int arr[N + 1];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[0];
        if (cnt++ == 0)
            arr[1] = arr[0];
        else
            for (int j = cnt; j > 0; j--)
            {
                if (arr[0] < arr[j - 1])
                    arr[j] = arr[j - 1];
                else
                {
                    arr[j] = arr[0];
                    break;
                }
            }
    }
    cout << arr[N - S + 1] << "\n";
}