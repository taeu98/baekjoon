#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    queue<int> V;
    int i_v;
    string s_v;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> s_v;
        if (s_v == "push")
            cin >> i_v, V.push(i_v);
        else if (s_v == "pop")
        {
            if (V.size())
                cout << V.front() << '\n', V.pop();
            else
                cout << -1 << '\n';
        }
        else if (s_v == "size")
            cout << V.size() << '\n';
        else if (s_v == "empty")
            cout << (V.size() == 0) << '\n';
        else if (s_v == "front")
            cout << (V.size() ? V.front() : -1) << '\n';
        else if (s_v == "back")
            cout << (V.size() ? V.back() : -1) << '\n';
    }
}