#include <bits/stdc++.h>
using ll = long long;
using namespace std;

pair<int, int> a[100100];
map<pair<int, int>, int> mpl;
map<int, int> mpr;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, mx = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1;i <= n;i++) {
        int f = a[i].first, s = a[i].second;
        int f2 = f - min(f, s), s2 = s - min(f, s);
        if (!mpl.count(make_pair(f2, s2))) mpl[make_pair(f2, s2)] = min(f, s);
        else {
            mx = max(mx, min(f, s) - mpl[make_pair(f2, s2)]);
        }
        int f3 = f + s;
        if (!mpr.count(f3)) mpr[f3] = min(1000000000 - f + 1, s);
        else {
            mx = max(mx, mpr[f3] - min(1000000000 - f + 1, s));
        }
    }
    cout << mx;
    return 0;
}