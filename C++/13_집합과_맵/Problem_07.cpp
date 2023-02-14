#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    set<string> S;
    string s, v;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        v = "";
        for (int j = i; j < s.size(); j++)
        {
            v += s[j];
            S.insert(v);
        }
    }
    cout << S.size() << endl;
}