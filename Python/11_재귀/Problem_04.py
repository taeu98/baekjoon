import sys
input = sys.stdin.readline


def merge_sort(A):
    if len(A) == 1:
        return A

    mid = (len(A)+1)//2
    
    left = merge_sort(A[:mid])
    right = merge_sort(A[mid:])

    i, j = 0, 0
    tmp = []

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            tmp.append(left[i])
            ans.append(left[i])
            i += 1
        else:
            tmp.append(right[j])
            ans.append(right[j])
            j += 1
    while i < len(left):
        tmp.append(left[i])
        ans.append(left[i])
        i += 1
    while j < len(right):
        tmp.append(right[j])
        ans.append(right[j])
        j += 1

    return tmp


if __name__ == '__main__':
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    ans = []
    
    merge_sort(a)

    if len(ans) >= k:
        print(ans[k-1])
    else:
        print(-1)
