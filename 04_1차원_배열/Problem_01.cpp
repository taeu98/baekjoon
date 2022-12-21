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

    /* 배열에 숫자 저장 */
    cin >> n;
    int array[n]; // 크기가 n인 배열 'array'
    for (int i = 0; i < n; i++)
        cin >> array[i];

    /* 같은 숫자 개수 세기 */
    cin >> s;
    for (int i = 0; i < n; i++)
        if (s == array[i])
            cnt++;

    /* 결과 출력 */
    cout << cnt << endl;
}