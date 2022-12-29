#include <bits/stdc++.h>
using namespace std;

using ll = long long;
stack<pair<int, int>> st;
int mx[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, q, maxdepth = 0, now = 0;
    cin >> n >> q;
    mx[0] = 2e9;
    for (int i = 1;i <= n;i++) {
        int l, d;
        cin >> d >> l;
        now += d;
        while (!st.empty() && st.top().first >= now) {
            l += st.top().second;
            st.pop();
        }
        st.emplace(now, l);
        mx[now] = max(mx[now], l);
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