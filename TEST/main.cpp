#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, H, W, N, X, Y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> H >> W >> N;
        X = (N - 1) % H + 1;
        Y = (N - 1) / H + 1;
        cout << 100 * X + Y << "\n";
    }
}