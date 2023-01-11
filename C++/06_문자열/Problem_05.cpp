/* 06단계 [ 문자열 ] */
// 제목 : 단어 공부
// 문제 번호 : 1157

#include <iostream>
using namespace std;

int main(void)
{
    int abc[26] = {
        0,
    };
    int x, max = 0;

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        x = (int(s[i]) > 95) ? int(s[i]) - 97 : int(s[i]) - 65;
        abc[x] += 1;
        if (abc[x] > max)
            max++;
    }

    s = "";
    for (int i = 0; i < 26; i++)
        if (abc[i] == max)
            s += char(i + 65);

    cout << ((s.length() > 1) ? "?" : s) << endl;
}
