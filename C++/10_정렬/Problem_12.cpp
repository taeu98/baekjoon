/* 10단계 [ 정렬 ] */
// 제목 : 좌표 압축
// 문제 번호 : 18870

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> v1(N);
    for (int i = 0; i < N; i++)
        cin >> v1[i];
    vector<int> v2 = v1;
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());
    for (int i = 0; i < N; i++)
        cout << lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin() << " ";
    cout << "\n";
}