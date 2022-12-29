#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[330];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        int t; cin >> t;
        a[t]++;
    }
    int mn = 100100;
    for (int i = 1;i <= m;i++) {
        mn = min(mn, a[i]);
    }
    cout << n - mn * m;

    return 0;
}