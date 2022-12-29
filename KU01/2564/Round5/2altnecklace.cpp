#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll a[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n;
    int m, k, cnt;
    cin >> n >> m >> k;
    a[0] = 0;
    cnt = m;
    for (int i = 1;i <= m;i++) {
        cin >> a[i];
    }
    a[m + 1] = n + 1;
    while (k--) {
        int c;
        ll t;
        cin >> t >> c;
        c = 1 - c;
        int idx = upper_bound(a, a + m + 1, t) - a;
        idx--;
        int nowcolor = idx % 2;
        int r = a[idx + 1] - 1;
        if (nowcolor == c) continue;
        if (t == n) cnt++;
        if (t == r) continue;
        else cnt += 2;
    }
    cout << cnt;
    return 0;
}