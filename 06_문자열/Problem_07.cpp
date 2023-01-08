/* 06단계 [ 문자열 ] */
// 제목 : 상수
// 문제 번호 : 2908

#include <iostream>
using namespace std;

int main(void)
{
    string n1 = "", n2 = "";
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < 3; i++)
    {
        n1 += s1[2 - i];
        n2 += s2[2 - i];
    }

    cout << max(n1, n2) << endl;

    return 0;
}
