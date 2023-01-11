/* 06단계 [ 문자열 ] */
// 제목 : 문자열 반복
// 문제 번호 : 2675

#include <iostream>
using namespace std;

int main(void)
{
    int n, x;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> s;
        for (int i = 0; i < s.length(); i++)
            for (int j = 0; j < x; j++)
                cout << s[i];
        cout << endl;
    }
}
