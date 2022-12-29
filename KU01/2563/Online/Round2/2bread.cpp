#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[1010], b[1010], d1[1010], d2[1010];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int w, h, n, m, mx1 = 1, mx2 = 1;
    cin >> w >> h >> n >> m;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        d1[i - 1] = a[i] - a[i - 1];
    }
    d1[n] = w - a[n];
    for (int i = 1;i <= m;i++) {
        cin >> a[i];
        d2[i - 1] = a[i] - a[i - 1];
    }
    d2[m] = h - a[m];
    for (int i = 0;i <= n;i++) {
        for (int j = 0;j <= m;j++) {
            int t = d1[i] * d2[j];
            //cout << t << ' ';
            if (t > mx1) {
                mx2 = mx1;
                mx1 = t;
            }
            else if (t > mx2) mx2 = t;
        }
    }
    cout << mx1 << ' ' << mx2;
    return 0;
}