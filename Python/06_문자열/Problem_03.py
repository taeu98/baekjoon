# int main()
# {
#     string s;
#     string alphabet = "abcdefghijklmnopqrstuvwxyz";
#     cin >> s;
#     for (int i = 0; i < alphabet.length(); i++)
#         cout << (int)s.find(alphabet[i]) << " ";
#     return 0;
# }


s = input()
alphabet = "abcdefghijklmnopqrstuvwxyz"
for i in alphabet:
    if i in s:
        print(s.find(alphabet[i]), end=' ')