/* 11단계 [ 재귀 ] */
// 제목 : 피보나치 수 5
// 문제 번호 : 10870

#include <iostream>
using namespace std;

int F(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return F(x - 2) + F(x - 1);
}

int main()
{
    int N, sum = 0;
    cin >> N;
    cout << F(N) << endl;
    return 0;
}