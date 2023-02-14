#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<string> arr1, arr2;
    int N, M;
    string v;

    cin >> N >> M;
    for (int i = 0; i < N + M; i++)
        cin >> v, arr1.push_back(v);
    sort(arr1.begin(), arr1.end());

    for (int i = 0; i < N + M - 1; i++)
        if (arr1[i] == arr1[i + 1])
            arr2.push_back(arr1[i]);

    cout << arr2.size() << '\n';
    for (auto &A : arr2)
        cout << A << '\n';
}