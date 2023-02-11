#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    int X = 0, Y;
    for (int i = 0; i < N - 2; i++)
        for (int j = i + 1; j < N - 1; j++)
            for (int k = j + 1; k < N; k++)
            {
                Y = arr[i] + arr[j] + arr[k];
                if (X < Y && Y <= M)
                    X = Y;
            }
    cout << X << endl;
}