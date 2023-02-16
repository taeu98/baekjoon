#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int K, X[2], Y[2];
    int arr[6];

    cin >> K;

    for (int i = 0; i < 6; i++)
        cin >> arr[i] >> arr[i];

    if (arr[0] == arr[2] + arr[4])
        X[0] = arr[0], X[1] = arr[3];
    else if (arr[4] == arr[2] + arr[0])
        X[0] = arr[4], X[1] = arr[1];
    else
        X[0] = arr[2], X[1] = arr[5];

    if (arr[1] == arr[3] + arr[5])
        Y[0] = arr[1], Y[1] = arr[4];
    else if (arr[5] == arr[3] + arr[1])
        Y[0] = arr[5], Y[1] = arr[2];
    else
        Y[0] = arr[3], Y[1] = arr[0];

    cout << K * (X[0] * Y[0] - X[1] * Y[1]) << endl;
}