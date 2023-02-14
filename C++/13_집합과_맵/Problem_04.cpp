#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> arr(20'000'000);
    int N, M, v;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> v, arr[10'000'000 + v]++;
    cin >> M;
    for (int i = 0; i < M; i++)
        cin >> v, cout << arr[10'000'000 + v] << ' ';
    cout << '\n';
}