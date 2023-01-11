/* 07단계 [ 기본수학 1 ] */
// 제목 : 달팽이는 올라가고 싶다
// 문제 번호 : 2869

#include <iostream>
using namespace std;
int main(void)
{
    int A, B, V;
    cin >> A >> B >> V;
    if ((V - A) % (A - B))
        cout << (V - A) / (A - B) + 2 << "\n";
    else
        cout << (V - A) / (A - B) + 1 << "\n";
}