#include <iostream>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, v;

    cin >> N;
    bool arr1[20'000'000] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> v;
        arr1[10'000'000 + v] = 1;
    }

    cin >> M;
    int arr2[M];
    for (int i = 0; i < M; i++)
        cin >> arr2[i];

    for (int x : arr2)
        cout << arr1[10'000'000 + x] << ' ';
    cout << "\n";
}