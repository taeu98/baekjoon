/* 08단계 [ 기본수학 2 ] */
// 제목 : 소인수분해
// 문제 번호 : 11653

#include <iostream>
using namespace std;

int main(void)
{
    int N, i = 2;
    cin >> N;
    while (N != 1)
    {
        if (N % i)
            i++;
        else
        {
            cout << i << endl;
            N /= i;
        }
    }
}