// 빠른 A+B
#include "iostream"
using namespace std;

// EX_01 //
/*
#include "iostream"
using namespace std;
int main(void)
{
    int n;
    scanf("%d", &n);
    int x, y;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", x + y);
    }
}
*/

// EX_02 //
int main(void)
{
    /* 시간초과를 막아주는 코드 */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        cout << x + y << '\n'; // 'endl'대신 '\n'을 사용하여 시간초과를 막는다.
    }
}
