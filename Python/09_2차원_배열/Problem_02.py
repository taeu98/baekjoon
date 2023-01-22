m, m_x, m_y = 0, 0, 0
for i in range(9):
    x = list(map(int, input().split()))
    # 조건 누락 : 최댓값이 두개 이상인 경우 그 중 제일 마지막 값의 위치를 출력한다.
    if max(x) >= m:
        m = max(x)
        m_x, m_y = i+1, x.index(m)+1
print(f"{m}\n{m_x} {m_y}")
