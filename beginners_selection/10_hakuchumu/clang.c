#include <stdio.h>
#include <string.h>

int main() {
    char S[100001];
    scanf("%s", S);
    
    int len = strlen(S);
    int dp[100001] = {0}; // dpテーブル
    dp[0] = 1; // 空文字列は常に作れる
    
    for (int i = 0; i <= len; i++) {
        if (!dp[i]) continue;
        
        // "dream"
        if (i + 5 <= len && strncmp(S + i, "dream", 5) == 0) {
            dp[i + 5] = 1;
        }
        // "dreamer"
        if (i + 7 <= len && strncmp(S + i, "dreamer", 7) == 0) {
            dp[i + 7] = 1;
        }
        // "erase"
        if (i + 5 <= len && strncmp(S + i, "erase", 5) == 0) {
            dp[i + 5] = 1;
        }
        // "eraser"
        if (i + 6 <= len && strncmp(S + i, "eraser", 6) == 0) {
            dp[i + 6] = 1;
        }
    }
    
    printf("%s\n", dp[len] ? "YES" : "NO");
    return 0;
}
