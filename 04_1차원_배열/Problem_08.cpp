/* 04단계 [ 1차원 배열 ] */
// 제목 : OX퀴즈
// 문제 번호 :8958

#include "iostream"
using namespace std;

int main(void)
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int cnt = 0;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'O')
            {
                cnt++;
                sum += cnt;
            }
            else
                cnt = 0;
        }
        cout << sum << endl;
        sum = 0;
    }
}
