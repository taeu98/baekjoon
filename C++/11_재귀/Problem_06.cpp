/* 11단계 [ 재귀 ] */
// 제목 : 하노이 탑 이동 순서
// 문제 번호 : 11729

#include <iostream>
using namespace std;

void hanoi(int n, int v1, int v2, int v3)
{
    if (n == 1)
        cout << v1 << " " << v3 << "\n";
    else
    {
        hanoi(n - 1, v1, v3, v2);
        cout << v1 << " " << v3 << "\n";
        hanoi(n - 1, v2, v1, v3);
    }
}
int main()
{
    int num;
    cin >> num;
    cout << (1 << num) - 1 << "\n";
    hanoi(num, 1, 2, 3);
}