#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int dp[320];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int l, n, mx = -1;
    cin >> l >> n;
    for (int i = 1;i <= n;i++) {
        int a, b;
        cin >> a >> b;
        dp[a]++;
        dp[b]--;
    }
    for (int i = 1;i <= 310;i++) {
        dp[i] += dp[i - 1];
        mx = max(mx, dp[i]);
    }
    cout << mx;

    return 0;
}