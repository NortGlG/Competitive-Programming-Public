#include <bits/stdc++.h>
using ll = long long;
using namespace std;
map<int, bool> r, c;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m, q, row = 0, col = 0;
    cin >> n >> m >> q;
    ll ans = (ll)n * (ll)m;
    while (q--) {
        int x, y;
        cin >> x >> y;
        if (r[x] != 1) {
            row++;
            r[x] = 1;
            ans -= max(m - col, 0);
        }
        if (c[y] != 1) {
            col++;
            c[y] = 1;
            ans -= max(n - row, 0);
        }
    }
    cout << ans % 25621;
    return 0;
}