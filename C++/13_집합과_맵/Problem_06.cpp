#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> V;
    int N, M;
    int v;

    cin >> N >> M;
    for (int i = 0; i < N + M; i++)
        cin >> v, V.push_back(v);
    sort(V.begin(), V.end());

    v = 0;
    for (int i = 0; i < N + M - 1; i++)
        if (V[i] == V[i + 1])
            v++;

    cout << N + M - v * 2 << '\n';
}