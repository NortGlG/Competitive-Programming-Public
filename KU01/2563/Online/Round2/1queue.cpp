#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int mx[100100], a[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        mx[i] = max(a[i], mx[i - 1]);
    }
    for (int i = 1;i <= m;i++) {
        int t;
        cin >> t;
        if (mx[t - 1] < a[t]) cout << "0\n";
        else cout << mx[t - 1] - a[t] + 1 << '\n';
    }
    return 0;
}