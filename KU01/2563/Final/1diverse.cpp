#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[55][55];
int ch[101];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m, ans = 0, now = 1;
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            cin >> a[i][j];
        }
    }
    if (n < 5 || m < 5) {
        cout << 0;
        return 0;
    }
    for (int i = 1;i <= n - 4;i++) {
        for (int j = 1;j <= m - 4;j++) {
            int cnt = 0;
            for (int ii = i;ii < i + 5;ii++) {
                for (int jj = j;jj < j + 5;jj++) {
                    if (ch[a[ii][jj]] != now) {
                        cnt++;
                        ch[a[ii][jj]] = now;
                    }
                }
            }
            now++;
            if (cnt >= 5) {
                ans++;
                //cout << i << ' ' << j << '\n';
            }
        }
    }
    cout << ans;
    return 0;
}