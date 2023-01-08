/* 07단계 [ 기본수학 1 ] */
// 제목 : 큰 수 A+B
// 문제 번호 : 10757

#include <iostream>
using namespace std;

int main(void)
{
    string A, B, C;
    int size;
    cin >> A >> B;
    size = max(A.length(), B.length());
    int sum[size + 1];
    for (int i = 0; i <= size; i++)
        sum[i] = 0;
    for (int i = 0; i < A.length(); i++)
        sum[i] += int(A[A.length() - i - 1]) - 48;
    for (int i = 0; i < B.length(); i++)
        sum[i] += int(B[B.length() - i - 1]) - 48;
    for (int i = 0; i < size; i++)
        if (sum[i] > 9)
        {
            sum[i] -= 10;
            sum[i + 1] += 1;
        }
    for (int i = 0; i <= size; i++)
        C += to_string(sum[i]);
    for (int i = C[C.length() - 1] == '0'; i < C.length(); i++)
        cout << C[C.length() - 1 - i];
}