// 두 수 비교하기
#include <iostream>
using namespace std;

int main(void)
{
    int num_1, num_2;
    cin >> num_1 >> num_2;
    if (num_1 > num_2)
        cout << ">" << endl;
    else if (num_1 < num_2)
        cout << "<" << endl;
    else
        cout << "==" << endl;
}