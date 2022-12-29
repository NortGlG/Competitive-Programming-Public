#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[555], b[555];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    int i = 0, j = 0, cnt = 0;
    bool ch = 0;
    while (!ch) {
        ch = (i == n && j == m);
        if (a[i] == b[j]) {
            if (i % 2 == j % 2) cnt++;
            if (i + 1 <= n) ++i;
            else if (j + 1 <= m) ++j;
        }
        else if (j + 1 <= m && a[i] > b[j]) {
            if (i % 2 == j % 2) cnt++;
            else if (a[i - 1] < b[j] && b[j + 1] < a[i]) ++cnt;
            ++j;
        }
        else if (i + 1 <= n && a[i] < b[j]) {
            if (i % 2 == j % 2) cnt++;
            else if (b[j - 1] < a[i] && a[i + 1] < b[j]) ++cnt;
            ++i;
        }
        else break;
    }
    cout << cnt << "\n";
    return 0;
}