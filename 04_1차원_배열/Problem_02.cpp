/* 04단계 [ 1차원 배열 ] */
// 제목 : X보다 작은 수
// 문제 번호 :10871

#include "iostream"
using namespace std;

int main(void)
{
    int n; // n : number(크기)
    int s; // s : search(검색)

    cin >> n >> s;
    int array[n]; // 크기가 n인 배열 'array'

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i] < s)
            cout << array[i] << ' ';
    }
    cout << endl;
}