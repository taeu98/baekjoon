// 킹, 퀸, 룩, 비숍, 나이트, 폰
#include <iostream>
using namespace std;

int main(void)
{
    int king = 1,
        queen = 1,
        rook = 2,
        bishop = 2,
        knight = 2,
        pawn = 8;
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;
    cout << 1 - king << endl
         << 1 - queen << endl
         << 2 - rook << endl
         << 2 - bishop << endl
         << 2 - knight << endl
         << 8 - pawn << endl;
}