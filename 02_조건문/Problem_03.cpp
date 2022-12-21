// 윤년
#include <iostream>
using namespace std;

int main(void)
{
    int year;
    cin >> year;
    /* 방법 1 */
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    /* 방법 2 */
    // cout << ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0) << endl; // 삼항 연산자 (? :)
}