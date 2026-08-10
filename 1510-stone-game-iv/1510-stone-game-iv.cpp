class Solution {
public:
     bool winnerSquareGame(int n) {
        // Intuition: plain recursive minimax, Alice maximizes, Bob minimizes, no caching
        return game(n, true);
    }

    bool game(int n, bool isAlice) {
        std::vector<bool> dp(n + 1, false);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j * j <= i; j++) {
                if (!dp[i - j * j]) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};