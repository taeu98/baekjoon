/* 06단계 [ 문자열 ] */
// 제목 : 단어의 개수
// 문제 번호 : 1152

#include <iostream>
using namespace std;

int main(void)
{
    string s;
    int cnt = 1;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
        if (s[i] == ' ')
            cnt++;
    if (s[0] == ' ')
        cnt--;
    if (s[s.length() - 1] == ' ')
        cnt--;
    cout << cnt << endl;

    return 0;
}
