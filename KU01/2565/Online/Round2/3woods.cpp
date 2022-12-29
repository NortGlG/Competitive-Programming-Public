#include<bits/stdc++.h>
using namespace std;

int dp[10][100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    for (int i = 1;i <= 8;i++) for (int j = 0;j <= 100001;j++) dp[i][j] = 1e9;
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1;i <= n;i++) {
        int q; cin >> q;
        while (q--) {
            int t; cin >> t;
            dp[i][t] = 0;
        }
    }
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
        }
    }
    for (int i = 1;i <= n;i++) {
        for (int j = m;j >= 1;j--) {
            dp[i][j] = min(dp[i][j], dp[i][j + 1] + 1);
        }
    }
    int ch = 0;
    for (int j = 1;j <= m;j++) {
        bool h = 1;
        for (int i = 1;i <= n;i++) {
            if (dp[i][j] > k) {
                h = 0; break;
            }
        }
        if (h) {
            ch = 1;
            break;
        }
    }
    cout << ch;

    return 0;
}