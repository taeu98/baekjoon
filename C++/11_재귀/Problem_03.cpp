/* 11단계 [ 재귀 ] */
// 제목 : 재귀의 귀재
// 문제 번호 : 25501

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        int cnt = 0, left = 0, right = s.length() - 1;
        bool flag = true;

        while (flag && left <= right)
        {
            cnt++;
            if (s[left] != s[right])
                flag = false;
            left++, right--;
        }
        cout << (flag ? 1 : 0) << " " << (flag && s.length() % 2 == 0 ? cnt + 1 : cnt) << "\n";
    }
    return 0;
}