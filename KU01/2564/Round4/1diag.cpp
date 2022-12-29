#include <bits/stdc++.h>
using ll = long long;
using namespace std;

pair<int, int> a[100100], b[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int x, y;
        cin >> x >> y;
        a[i] = { x + y, x - y };
        b[i] = { x - y, x + y };
    }
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    int medx = a[n / 2].first, medy = b[n / 2].first;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += abs(medx - a[i].first) + abs(medy - a[i].second);
    }
    cout << ans;
    return 0;
}