#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[101000];
unordered_map<int, int> L, W;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int w, h, n, m, q;
    cin >> w >> h >> n >> m >> q;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        L[a[i] - a[i - 1]]++;
    }
    L[w - a[n]]++;
    for (int i = 1;i <= m;i++) {
        cin >> a[i];
        W[a[i] - a[i - 1]]++;
    }
    W[h - a[m]]++;
    while (q--) {
        int t;
        cin >> t;
        ll ans = 0;
        int sq = sqrt(t);
        for (int i = 1;i <= sq;i++) {
            if (t % i) continue;
            int a = i, b = t / i;
            if (a != b) ans += L[a] * W[b] + L[b] * W[a];
            else ans += L[a] * W[b];
        }
        cout << ans << '\n';
    }
    return 0;
}