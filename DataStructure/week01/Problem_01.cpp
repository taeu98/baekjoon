#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> V;
    int N, M, cur = 0;
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
        V.push_back(i);
    cout << '<';
    for (int i = 0; i < N; i++)
    {
        cur = (cur + M - 1) % V.size();
        cout << V[cur];
        V.erase(V.begin() + cur);
        if (i != N - 1)
            cout << ", ";
    }
    cout << '>' << "\n";
}