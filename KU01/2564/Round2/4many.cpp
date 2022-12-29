#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[100100], mark[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int k, cnt = 0, s = 1;
    ll ans = 0, n;
    cin >> n >> k;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    if (k == 1) {
        cout << ((ll)n * (n + 1)) / 2;
        return 0;
    }
    for (int i = 1;i <= n;i++) {
        mark[a[i]]++;
        if (mark[a[i]] == 1) cnt++;
        while (cnt >= k) {
            ans += n - i + 1;
            mark[a[s]]--;
            if (mark[a[s]] == 0) cnt--;
            s++;
        }
    }
    cout << ans;
    return 0;
}