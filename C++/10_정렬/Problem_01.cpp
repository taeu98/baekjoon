/* 10단계 [ 정렬 ] */
// 제목 : 수 정렬하기
// 문제 번호 : 2750

#include <iostream>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x;
    int arr[2001] = {0};

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        arr[x + 1000] = 1;
    }

    for (int i = 0; i < 2001; i++)
        if (arr[i] == 1)
            cout << i - 1000 << "\n";
}