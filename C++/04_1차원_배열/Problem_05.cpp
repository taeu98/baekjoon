/* 04단계 [ 1차원 배열 ] */
// 제목 : 과제 안 내신 분..?
// 문제 번호 :5597

#include "iostream"
using namespace std;

int main(void)
{
    int s;
    int array[30][2];
    for (int i = 0; i < 30; i++)
    {
        array[i][0] = i + 1;
        array[i][1] = 0;
    }
    for (int i = 0; i < 30 - 2; i++)
    {
        cin >> s;
        for (int i = 0; i < 30; i++)
            if (array[i][0] == s)
                array[i][1] = 1;
    }
    for (int i = 0; i < 30; i++)
        if (array[i][1] == 0)
            cout << array[i][0] << endl;
}