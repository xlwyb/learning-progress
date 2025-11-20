#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    int freq[26] = {0};
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }
    int odd_count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) odd_count++;
    }
    if ((n % 2 == 0 && odd_count > 0) || (n % 2 == 1 && odd_count != 1)) {
        printf("Impossible\n");
        return 0;
    }
    int swaps = 0;
    int len = n;
    for (int i = 0; i < len / 2; i++) {
        int j = len - 1 - i;
        if (s[i] != s[j]) {
            int k = j;
            while (k > i && s[k] != s[i]) k--;
            if (k == i) {
                char tmp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = tmp;
                swaps++;
                i--;
                continue;
            } else {
                for (int p = k; p < j; p++) {
                    char tmp = s[p];
                    s[p] = s[p + 1];
                    s[p + 1] = tmp;
                    swaps++;
                }
            }
        }
    }
    printf("%d\n", swaps);
    return 0;
}
