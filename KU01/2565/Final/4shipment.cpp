#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int a[2][330], b[2][330];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    for (int i = 1;i <= n;i++) {
        cin >> a[0][i];
    }
    for (int i = 1;i <= n;i++) {
        cin >> b[0][i];
    }
    for (int i = 1;i <= n;i++) {
        cin >> a[1][i];
    }
    for (int i = 1;i <= n;i++) {
        cin >> b[1][i];
    }
    sort(a[0] + 1, a[0] + 1 + n);
    sort(a[1] + 1, a[1] + 1 + n);
    sort(b[0] + 1, b[0] + 1 + n, greater<int>());
    sort(b[1] + 1, b[1] + 1 + n, greater<int>());
    int mn = 2e9;
    for (int i = 0;i <= k;i++) {
        int l = i, r = k - i;
        if (l > n || r > n) continue;
        int mx = 0;
        for (int j = 1;j <= l;j++) {
            mx = max(mx, a[0][j] + b[0][j + n - l]);
        }
        for (int j = 1;j <= r;j++) {
            mx = max(mx, a[1][j] + b[1][j + n - r]);
        }
        mn = min(mn, mx);
    }
    cout << mn;
    return 0;
}