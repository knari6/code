#include <iostream>
#include <string>
#include <vector>

using namespace std;

string canMakeFromWords(const string& S) {
    const int len = S.length();
    vector<bool> dp(len + 1, false);
    dp[0] = true; // 空文字列は常に作れる
    
    // 検索する単語のリスト
    const vector<string> words = {"dream", "dreamer", "erase", "eraser"};
    
    for (int i = 0; i <= len; i++) {
        if (!dp[i]) continue;
        
        // 各単語でマッチングを試みる
        for (const string& word : words) {
            int nextPos = i + word.length();
            if (nextPos <= len && S.substr(i, word.length()) == word) {
                dp[nextPos] = true;
            }
        }
    }
    
    return dp[len] ? "YES" : "NO";
}

int main() {
    string S;
    cin >> S;
    cout << canMakeFromWords(S) << endl;
    return 0;
}
