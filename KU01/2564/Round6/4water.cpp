#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int dp[15][2020];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k, x;
    cin >> n >> k >> x;
    dp[0][(x + 1) / 2] = 1;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= k - (i & 1);j++) {
            if (i & 1) {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j + 1];
                if (j == 1) {
                    dp[i][j] += dp[i - 1][j];
                }
                else if (j == k - 1) {
                    dp[i][j] += dp[i - 1][j + 1];
                }
            }
            else dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            dp[i][j] %= (1 << n);
        }
    }
    for (int j = 1;j <= k - (n & 1);j++) {
        cout << dp[n][j] << ' ';
    }
    return 0;
}