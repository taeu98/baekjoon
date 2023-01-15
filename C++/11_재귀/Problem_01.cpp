/* 11단계 [ 재귀 ] */
// 제목 : 팩토리얼
// 문제 번호 : 10872

#include <iostream>
using namespace std;

int main()
{
    int N, sum = 1;
    cin >> N;
    for (int i = N; i > 0; i--)
        sum *= i;
    cout << sum << "\n";
    return 0;
}