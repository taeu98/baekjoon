/* 10단계 [ 정렬 ] */
// 제목 : 나이순 정렬
// 문제 번호 : 10814

#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int x;
    string y;
    vector<tuple<int, int, string>> v;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        v.push_back({x, i, y});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
        cout << get<0>(v[i]) << ' ' << get<2>(v[i]) << '\n';
    return 0;
}