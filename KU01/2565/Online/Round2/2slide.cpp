#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[330];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, ans = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for (int i = 1;i <= n;i++) {
        int cnt = 0;
        for (int j = i;j >= 1;j--) {
            if (a[j] < a[i]) cnt++;
        }
        ans += cnt;
    }
    cout << ans;
    return 0;
}