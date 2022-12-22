/* 04단계 [ 1차원 배열 ] */
// 제목 : 나머지
// 문제 번호 :3052

#include "iostream"
using namespace std;

int main(void)
{
    int input;
    int count = 0;
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> input;
        array[i] = input % 42;
    }
    for (int i = 0; i < 10; i++)
    {
        int cnt = 0;
        for (int j = i + 1; j < 10; j++)
            if (array[i] == array[j])
                cnt++;
        if (cnt == 0)
            count++;
    }
    cout << count << endl;
}