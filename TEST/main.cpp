#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string word;
    map<string, bool> find;

    int N, M, cnt = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> word;
        find[word] = true;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> word;
        if (find[word])
            cnt++;
    }
    cout << cnt << "\n";
}