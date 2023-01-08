/* 08단계 [ 기본수학 2 ] */
// 제목 : 베르트랑 공준
// 문제 번호 : 4948

#include <iostream>
using namespace std;

bool prime_number(int n)
{
    if (n < 2)
        return false;
    else
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;
    return true;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, cnt;
    while (true)
    {
        cin >> N;
        if (N == 0)
            return 0;
        else
        {
            cnt = 0;
            for (int i = N + 1; i <= 2 * N; i++)
                if (prime_number(i))
                    cnt++;
            cout << cnt << "\n";
        }
    }
}
