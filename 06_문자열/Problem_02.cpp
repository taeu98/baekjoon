/* 06단계 [ 문자열 ] */
// 제목 : 숫자의 합
// 문제 번호 : 11720

#include <iostream>
using namespace std;

int main(void)
{
    int sum = 0;

    int n;
    cin >> n;

    string a;
    cin >> a;

    for (int i = 0; i < n; i++)
        sum += int(a[i] - 48);
    cout << sum << endl;
}