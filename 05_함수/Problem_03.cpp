/* 05단계 [ 함수 ] */
// 제목 : 한수
// 문제 번호 : 1065

#include <iostream>
using namespace std;

bool IHS(int x) // Is it HanSoo ?
{
    int diff = x / 10 % 10 - x % 10; // 10의자리수 - 1의자리수
    while (x > 9)                    // x가 10보다 작아질때까지 반복
    {
        if (diff != x / 10 % 10 - x % 10) // 각 자리숫자의 차이가 다르면 'false'
            return false;
        x /= 10;
    }
    return true; // 차이가 모두 같으면 'true'
}

int CNT(int x) // CouNT
{
    int cnt = 0;
    for (int i = 1; i <= x; i++)
        if (IHS(i))
            cnt++;
    return cnt;
}

int main(void)
{
    int x;
    cin >> x;
    cout << CNT(x) << endl;
    return 0;
}