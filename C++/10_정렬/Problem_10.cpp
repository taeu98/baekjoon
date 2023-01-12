/* 10단계 [ 정렬 ] */
// 제목 : 단어 정렬
// 문제 번호 : 1181

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    string s;
    vector<pair<int, string>> v;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        v.push_back({s.length(), s});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
        if (i == 0 || v[i].second != v[i - 1].second)
            cout << v[i].second << '\n';
    return 0;
}