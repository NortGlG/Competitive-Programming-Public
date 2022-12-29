#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[444][444];
int cnt[200200];
pair<int, int> t[200220], d[200220], bt[200200], bd[200200];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m, q;
    cin >> n >> m >> q;
    int mx = 0;
    for (int i = 0;i <= 200001;i++)
        t[i].first = 2e9, t[i].second = 2e9, bt[i].first = 2e9, bt[i].second = 2e9;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            cin >> a[i][j];
            cnt[a[i][j]]++;
            mx = max(mx, a[i][j]);
            t[a[i][j]].first = min(t[a[i][j]].first, i);
            t[a[i][j]].second = min(t[a[i][j]].second, j);
            d[a[i][j]].first = max(d[a[i][j]].first, i);
            d[a[i][j]].second = max(d[a[i][j]].second, j);
        }
    }
    for (int i = 1;i <= 200000;i++) {
        if (!cnt[i]) continue;
        bd[i] = d[i];
        bt[i] = t[i];
    }
    for (int i = 200000;i >= 1;i--) {
        bt[i].first = min(bt[i].first, bt[i + 1].first);
        bt[i].second = min(bt[i].second, bt[i + 1].second);
        bd[i].first = max(bd[i].first, bd[i + 1].first);
        bd[i].second = max(bd[i].second, bd[i + 1].second);

    }
    while (q--) {
        int type, k;
        cin >> type >> k;
        if (type == 1) {
            if (!cnt[k]) cout << "0\n";
            else cout << 2 * (d[k].first + d[k].second - t[k].first - t[k].second) + 4 << '\n';
        }
        else {
            if (k > mx) cout << "0\n";
            else cout << 2 * (bd[k].first + bd[k].second - bt[k].first - bt[k].second) + 4 << '\n';
        }
    }
    return 0;
}