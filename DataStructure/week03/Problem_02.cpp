#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    string S;
    double R;

    cin >> N >> S;

    int V[N];
    stack<double> A;

    for (int i = 0; i < N; i++)
        cin >> V[i];

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] >= 'A' && S[i] <= 'Z')
            A.push(V[S[i] - 'A']);
        else if (!A.empty())
        {
            R = A.top(), A.pop();
            if (S[i] == '+')
                R = A.top() + R;
            else if (S[i] == '-')
                R = A.top() - R;
            else if (S[i] == '*')
                R = A.top() * R;
            else if (S[i] == '/')
                R = A.top() / R;
            A.pop(), A.push(R);
        }
    }
    cout << fixed, cout.precision(2);
    cout << A.top() << '\n';
}