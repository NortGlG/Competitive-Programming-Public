#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int board[110][110];
int dp[110][110];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m, q, cnt = 0;
    cin >> m >> n >> q;
    while (q--) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1++, y1++, x2++, y2++;
        board[y1][x1]++;
        board[y2][x1]--;
        board[y1][x2]--;
        board[y2][x2]++;
    }
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            //cout << board[i][j] << ' ';
            board[i][j] = board[i][j] + board[i - 1][j] + board[i][j - 1] - board[i - 1][j - 1];
        }
        //cout << '\n';
    }
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            if (board[i][j] == 0) {
                dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                if (dp[i][j] >= 3) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}