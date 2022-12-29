#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    int w, l;
    ll mn = 1e18;
    cin >> w >> l >> n >> m;
    for (int i = n;i <= m;i++) {
        ll t = (w % i) * (l % i);
        if (t < mn) mn = t;
    }
    cout << mn;
    return 0;
}