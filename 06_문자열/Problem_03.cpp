/* 06단계 [ 문자열 ] */
// 제목 : 알파벳 찾기
// 문제 번호 : 10809

#include <iostream>
using namespace std;

int main()
{
    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    for (int i = 0; i < alphabet.length(); i++)
        cout << (int)s.find(alphabet[i]) << " ";
    return 0;
}