/* 06단계 [ 문자열 ] */
// 제목 : 그룹 단어 체커
// 문제 번호 : 1316

#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    int cnt = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;

        bool abc[26] = {
            false,
        };
        abc[(int)(s[0]) - 97] = true;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
                continue;
            else if (s[i] != s[i - 1] && abc[(int)(s[i]) - 97] == true)
            {
                cnt++;
                break;
            }
            else
                abc[(int)(s[i]) - 97] = true;
        }
    }

    cout << n - cnt << endl;
    return 0;
}