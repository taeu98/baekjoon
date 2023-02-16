#include <iostream>
using namespace std;

int main()
{
    int X, Y, W, H;
    cin >> X >> Y >> W >> H;
    cout << min(min((X - 0), (W - X)), min((Y - 0), (H - Y))) << endl;
}