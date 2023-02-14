#include <iostream>
#include <vector>
using namespace std;

struct S
{
    int index, data;
};

int main()
{
    int N;
    cin >> N;

    int v;
    vector<S> V;

    for (int i = 1; i <= N; i++)
    {
        cin >> v;
        V.push_back({i, v});
    }

    while (N--)
    {
        cout << V.front().index << " ";

        int data = V.front().data;
        V.erase(V.begin());

        if (data > 0)
            for (int i = 0; i < data - 1; i++)
            {
                V.push_back(V.front());
                V.erase(V.begin());
            }
        else
            for (int i = 0; i < (data * (-1)); i++)
            {
                V.insert(V.begin(), V.back());
                V.erase(V.end() - 1);
            }
    }
    cout << endl;
}