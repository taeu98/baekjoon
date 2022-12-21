// 합
#include "iostream"
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 1; i <= n; i++)
        x += i;
    cout << x << endl;
}