#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[30][30];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m, s, cnt = 0;
    cin >> n >> m >> s;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            cin >> a[i][j];
            a[i][j] += (i - 1) * s;
            if (a[i][j] > a[i - 1][j]) cnt++;
            else a[i][j] = a[i - 1][j];
        }
    }
    cout << cnt;
    return 0;
}