// 곱셈
#include <iostream>
using namespace std;

int main(void)
{
    int num_1, num_2;
    cin >> num_1 >> num_2;
    cout << num_1 * (num_2 % 10) << endl
         << num_1 * (num_2 / 10 % 10) << endl
         << num_1 * (num_2 / 10 / 10) << endl
         << num_1 * num_2 << endl;
}