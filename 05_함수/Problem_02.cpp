/* 05단계 [ 함수 ] */
// 제목 : 셀프 넘버
// 문제 번호 : 4673

#include <iostream>
using namespace std;

#define array_size 10001
bool self_num[array_size];

int NSN(int x) // Not a Self Number : 생성자를 반환
{
    int sum = x;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main(void)
{
    for (int i = 1; i < array_size; i++) // 모든숫자를 'self number'로 저장
        self_num[i] = true;
    for (int i = 1; i < array_size; i++) // 1~N 까지의 생성자를 'self number'에서 제외
        if (NSN(i) < array_size)
            self_num[NSN(i)] = false;
    for (int i = 1; i < array_size; i++) // 'self number'출력
        if (self_num[i])
            cout << i << endl;
    return 0;
}