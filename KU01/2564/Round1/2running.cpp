#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll a[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n, mn = 2e9, cnt = 0, k;
    cin >> n >> k;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    for (int i = 1;i <= n;i++) {
        if (a[i] * k - a[i] < mn * k) cnt++;
    }
    cout << cnt;
    return 0;
}