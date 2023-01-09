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
    int cnt = 668;
    int primes[669];
    for (int i = 1; i <= 5000; i++)
        if (prime_number(i))
            primes[cnt--] = i;

    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        for (int j = 0; j < 762; j++)
        {
            if (2 * primes[j] <= N && prime_number(N - primes[j]))
            {
                cout << primes[j] << ' ' << N - primes[j] << "\n";
                break;
            }
        }
    }
}
