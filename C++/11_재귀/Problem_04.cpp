/* 11단계 [ 재귀 ] */
// 제목 : 알고리즘 수업 - 병합 정렬 1
// 문제 번호 : 24060

#include <iostream>
using namespace std;

int *A, *tmp;
int N, K, result = -1, cnt = 0;

void merge(int A[], int p, int q, int r)
{
    int i = p, j = q + 1, t = 1;

    while (i <= q && j <= r)
        tmp[t++] = A[A[i] <= A[j] ? i++ : j++];

    while (i <= q)
        tmp[t++] = A[i++];

    while (j <= r)
        tmp[t++] = A[j++];

    i = p, t = 1;

    while (i <= r)
    {
        A[i++] = tmp[t++];
        /* cnt 코드 추가 - 처음 */
        cnt++;
        if (cnt == K)
        {
            result = A[i - 1];
            break;
        }
        /* cnt 코드 추가 - 끝 */
    }
}

void merge_sort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main()
{
    cin >> N >> K;
    A = new int[N + 1];
    tmp = new int[N + 1];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    merge_sort(A, 0, N - 1);
    cout << result << "\n";
}