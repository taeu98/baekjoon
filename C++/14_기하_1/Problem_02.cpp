#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> X(3), Y(3);
    for (int i = 0; i < 3; i++)
        cin >> X[i] >> Y[i];
    sort(X.begin(), X.end()), cout << ((X[0] == X[1]) ? X[2] : X[0]) << ' ';
    sort(Y.begin(), Y.end()), cout << ((Y[0] == Y[1]) ? Y[2] : Y[0]) << '\n';
}