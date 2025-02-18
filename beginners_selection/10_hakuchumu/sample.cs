using System;

class Program
{
    static string CanMakeFromWords(string S)
    {
        int len = S.Length;
        bool[] dp = new bool[len + 1];
        dp[0] = true; // 空文字列は常に作れる
        
        // 検索する単語のリスト
        string[] words = { "dream", "dreamer", "erase", "eraser" };
        
        for (int i = 0; i <= len; i++)
        {
            if (!dp[i]) continue;
            
            // 各単語でマッチングを試みる
            foreach (string word in words)
            {
                int nextPos = i + word.Length;
                if (nextPos <= len && S.Substring(i, word.Length) == word)
                {
                    dp[nextPos] = true;
                }
            }
        }
        
        return dp[len] ? "YES" : "NO";
    }
    
    static void Main()
    {
        string S = Console.ReadLine();
        Console.WriteLine(CanMakeFromWords(S));
    }
}
