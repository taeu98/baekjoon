// 시험 성적
#include <iostream>
using namespace std;

int main(void)
{
    int score;
    cin >> score;
    if (90 <= score)
        cout << "A" << endl;
    else if (80 <= score)
        cout << "B" << endl;
    else if (70 <= score)
        cout << "C" << endl;
    else if (60 <= score)
        cout << "D" << endl;
    else
        cout << "F" << endl;
}