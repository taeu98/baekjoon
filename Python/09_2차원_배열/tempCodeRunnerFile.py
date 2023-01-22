# int x, n1, n2;
# cin >> n1 >> n2;
# int arr[n1][n2];

# for (int i1 = 0; i1 < n1; i1++)
#     for (int i2 = 0; i2 < n2; i2++)
#         arr[i1][i2] = 0;

# for (int i = 0; i < 2; i++)
#     for (int i1 = 0; i1 < n1; i1++)
#         for (int i2 = 0; i2 < n2; i2++)
#             cin >> x;
#             arr[i1][i2] += x;

# for (int i1 = 0; i1 < n1; i1++)
#     for (int i2 = 0; i2 < n2; i2++)
#         cout << arr[i1][i2] << " ";
#     cout << endl;
x, y = [], []
n1, n2 = map(int, input().split())
for i in range(n1):
    x.append(list(map(int, input().split())))
for i in range(n2):
    y.append(list(map(int, input().split())))
for i in range(n1):
    for j in range(n2):
        x[i][j] += y[i][j]
for i in range(n1):
    for j in range(n2):
        print(x[i][j], end=" ")
    print()
