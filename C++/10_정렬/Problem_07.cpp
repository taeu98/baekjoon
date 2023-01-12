/* 10단계 [ 정렬 ] */
// 제목 : 소트인사이드
// 문제 번호 : 1427

#include <iostream>
using namespace std;

int main()
{
    int X;
    int arr[10] = {0};

    cin >> X;

    while (X)
    {
        arr[X % 10]++;
        X /= 10;
    }

    for (int i = 9; i >= 0; i--)
        for (int j = 0; j < arr[i]; j++)
            cout << i;
    cout << endl;
}