#include<bits/stdc++.h>
using namespace std;

int mx[33], mn[33];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, b, ans = -1;
    cin >> n >> b;
    for (int i = 1;i <= 30;i++) mn[i] = 1e9;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            int t;
            cin >> t;
            mx[i] = max(mx[i], t);
            mn[i] = min(mn[i], t);
        }
    }
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            if (i == j) ans = max(ans, mx[i] - mn[i]);
            else ans = max(ans, mx[i] - mn[j] + 2 * b);
        }
    }
    cout << ans;
    return 0;
}