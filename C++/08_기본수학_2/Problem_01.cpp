/* 08단계 [ 기본수학 2 ] */
// 제목 : 소수 찾기
// 문제 번호 : 1978

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
    int N, n, cnt = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        if (prime_number(n))
            cnt++;
    }
    cout << cnt << endl;
}