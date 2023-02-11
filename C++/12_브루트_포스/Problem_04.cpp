#include <iostream>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;

    int cnt, ans = 64;
    string board[N];
    string WB = "WB";

    string S;
    for (int i = 0; i < N; i++)
    {
        cin >> S;
        board[i] = S;
    }
    for (int i = 0; i < N - 7; i++)
        for (int j = 0; j < M - 7; j++)
        {
            cnt = 0;
            for (int x = 0; x < 8; x++)
                for (int y = 0; y < 8; y++)
                    if (board[i + x][j + y] == WB[(x + y) % 2])
                        cnt++;
            if (cnt > 32)
                cnt = 64 - cnt;
            if (cnt < ans)
                ans = cnt;
        }
    cout << ans << "\n";
}