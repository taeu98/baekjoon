// A/B
#include <iostream>
using namespace std;

int main(void)
{
    double num_1, num_2;
    cin >> num_1 >> num_2;
    cout.precision(10); // 유효숫자 : 10
    cout << fixed;      // 고정 소숫점 표기로 전환
    cout << num_1 / num_2 << endl;
}