/* 08단계 [ 기본수학 2 ] */
// 제목 : 소수
// 문제 번호 : 2581

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
    int M, N;
    int sum = 0, x;
    bool flag = true;
    cin >> M >> N;
    for (int i = M; i <= N; i++)
    {
        if (prime_number(i))
        {
            if (flag)
            {
                x = i;
                flag = false;
            }
            sum += i;
        }
    }
    if (sum)
    {
        cout << sum << endl
             << x << endl;
    }
    else
        cout << -1 << endl;
}
