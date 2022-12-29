#include <bits/stdc++.h>
using namespace std;

int dp[1001001];
int main()
{
    int n, m, mx = 0;
    cin >> n >> m;
    for (int i = 1;i <= m;i++) {
        int a, b;
        cin >> a >> b;
        dp[a]++;
        dp[b + 1]--;
    }
    for (int i = 1;i <= n;i++) {
        dp[i] += dp[i - 1];
        mx = max(mx, dp[i]);
    }
    if (mx == 1)mx = 0;
    cout << mx;
    return 0;
}