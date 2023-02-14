#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M;
    string S;
    map<int, string> arr1;
    map<string, int> arr2;

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        cin >> S;
        arr1[i] = S;
        arr2[S] = i;
    }

    while (M)
    {
        cin >> S;
        if (atoi(S.c_str()))
            cout << arr1[atoi(S.c_str())] << "\n";
        else
            cout << arr2[S] << "\n";
        M--;
    }

    return 0;
}