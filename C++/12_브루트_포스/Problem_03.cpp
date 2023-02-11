#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N][2];
    int X, Y;
    for (int i = 0; i < N; i++)
    {
        cin >> X >> Y;
        arr[i][0] = X;
        arr[i][1] = Y;
    }
    int a[N] = {};
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
                a[i]++;
    for (int i = 0; i < N; i++)
        cout << a[i] + 1 << endl;
}