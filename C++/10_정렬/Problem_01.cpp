/* 10단계 [ 정렬 ] */
// 제목 : 수 정렬하기
// 문제 번호 : 2750

#include <iostream>
using namespace std;
int main()
{
    int N, cnt = 0;
    cin >> N;
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
    for (int i = 1; i <= cnt; i++)
        cout << arr[i] << "\n";
}