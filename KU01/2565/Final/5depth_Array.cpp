#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int a[100100], mx[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, now = 0, maxdepth = 0, q;
    cin >> n >> q;
    mx[0] = 2e9;
    for (int i = 1;i <= n;i++) {
        int d, l;
        cin >> d >> l;
        now += d;
        if (d == -1) {
            a[now] += a[now + 1];
            a[now] += l;
        }
        else {
            a[now] = l;
        }
        mx[now] = max(mx[now], a[now]);
        maxdepth = max(maxdepth, now);
    }
    while (q--) {
        int t; cin >> t;
        int l = 0, r = maxdepth;
        while (l < r) {
            int mid = (l + r + 1) / 2;
            if (mx[mid] >= t) l = mid;
            else r = mid - 1;
        }
        cout << l << '\n';
    }
    return 0;
}