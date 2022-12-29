#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[200200], g[200200];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k, island = 0, gap = 0, ans = 0;
    cin >> n >> k;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        if (a[i] <= 0) {
            if (i == 1 || a[i - 1] > 0) gap++;
            g[gap] += -a[i] + 1;
        }
        else {
            if (i == 1 || a[i - 1] <= 0) island++;
        }
    }
    int t = island - k;
    sort(g + 1, g + gap + 1);
    for (int i = 1;i <= t;i++)
        ans += g[i];
    cout << ans;
    return 0;
}