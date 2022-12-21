/* 04단계 [ 1차원 배열 ] */
// 제목 : 개수 세기
// 문제 번호 :10807

#include "iostream"
using namespace std;

int main(void)
{
    /* 변수 생성 */
    int n;       // n : number(크기)
    int s;       // s : search(검색)
    int cnt = 0; // c : count(셈)
    int a[n];    // a : array(배열)

    /* 배열에 숫자 저장 */
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    /* 같은 숫자 개수 세기 */
    cin >> s;
    for (int i = 0; i < n; i++)
        if (s == a[i])
            cnt++;

    /* 결과 출력 */
    cout << cnt << endl;
}