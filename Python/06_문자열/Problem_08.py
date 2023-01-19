/* 06단계 [ 문자열 ] */
// 제목 : 다이얼
// 문제 번호 : 5622

#include <iostream>
using namespace std;

int main(void)
{
    int arr[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int sum = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        sum += arr[int(s[i]) - 65];
    cout << sum << endl;
}