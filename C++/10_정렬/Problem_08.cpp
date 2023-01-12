/* 10단계 [ 정렬 ] */
// 제목 : 좌표 정렬하기
// 문제 번호 : 11650

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, x, y;
    cin >> N;

    vector<pair<int, int>> v;

    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
        cout << v[i].first << ' ' << v[i].second << '\n';
}