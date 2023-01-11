/* 06단계 [ 문자열 ] */
// 제목 : 크로아티아 알파벳
// 문제 번호 : 2941

#include <iostream>
using namespace std;

int main(void)
{
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        cnt++;
        if (s[i] == 'c' || s[i] == 's' || s[i] == 'z')
            if (s[i + 1] == '=')
            {
                i++;
                continue;
            }
        if (s[i] == 'c' || s[i] == 'd')
            if (s[i + 1] == '-')
            {
                i++;
                continue;
            }
        if (s[i] == 'l' || s[i] == 'n')
            if (s[i + 1] == 'j')
            {
                i++;
                continue;
            }
        if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
        {
            i += 2;
            continue;
        }
    }
    cout << cnt << endl;
}