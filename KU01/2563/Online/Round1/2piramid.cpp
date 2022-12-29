#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, a;
    cin >> n >> a;
    int all = n * (n + 1) * (2 * n + 1) / 6;
    if (a != all) {
        all -= a;
        int cnt = 1;
        for (int i = n;i >= 1;i--) {
            if (all - i * i <= 0) break;
            all -= i * i;
            cnt++;
        }
        cout << cnt;
    }
    else cout << '0';
    return 0;
}