#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int *arr = new int[M];
    for (int i = 0; i < M; i++)
        cin >> arr[i];
    int cnt = 0;

    for (int i = 0; i < M; i++)
    {
        cnt += (N - arr[i] + 1 > arr[i] - 1 ? arr[i] - 1 : N - arr[i] + 1);

        for (int f = i + 1; f < M; f++)
            arr[f] = (arr[i] <= arr[f] ? arr[f] - arr[i] : arr[f] + N - arr[i]);
        N--;
    }
    cout << cnt;
}