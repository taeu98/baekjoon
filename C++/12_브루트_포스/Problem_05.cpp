#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int cnt = 0;
    int i_x = 100;
    string s_x;
    while (cnt < N)
    {
        s_x = to_string(++i_x);
        for (int i = 0; i <= s_x.length() - 3; i++)
            if (s_x[i + 0] == '6' && s_x[i + 1] == '6' && s_x[i + 2] == '6')
            {
                cnt++;
                break;
            }
    }
    cout << i_x << "\n";
}