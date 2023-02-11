#include <iostream>
#include <cmath>
using namespace std;

int Func(int X)
{
    int S, V;
    for (int i = 0; i < pow(10, log10(X) + 1); i++)
    {
        S = i, V = i;
        while (V)
            S += V % 10, V /= 10;
        if (S == X)
            return i;
    }
    return 0;
}

int main()
{
    int N;
    cin >> N;
    cout << Func(N) << "\n";
}