#include <bits/stdc++.h>
using ll = long long;
using namespace std;

bool sieve[15050];
int dp[15050];
bool mark[15050];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int a, b;
    ll ans = 0;
    cin >> a >> b;
    sieve[2] = 1;
    dp[2]++;
    for (int i = 3;i <= 15000;i += 2) {
        if (sieve[i]) continue;
        dp[i]++;
        for (int j = i * i;j <= 15000;j += i) sieve[j] = 1;
    }
    for (int i = 1;i <= 3 * b;i++) {
        dp[i] += dp[i - 1];
    }
    for (int i = a;i <= b;i++) {
        for (int j = i;j <= b;j++) {
            int t = i + j;
            ans += dp[t + b] - dp[t + j - 1];
        }
    }
    cout << ans;
    return 0;
}