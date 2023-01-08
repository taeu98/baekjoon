/* 08단계 [ 기본수학 2 ] */
// 제목 : 소수 구하기
// 문제 번호 : 1929

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

    int M, N;
    cin >> M >> N;
    for (int i = M; i <= N; i++)
        if (prime_number(i))
            cout << i << "\n";
}
