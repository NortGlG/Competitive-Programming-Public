#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[610], mk[610], um[610];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, cnt = 0, mx = -1;
    cin >> n;
    for (int i = 1;i <= 2 * n;i++) {
        cin >> a[i];
        mk[a[i]]++;
    }
    for (int i = 2 * n;i >= 1;i--) {
        if (mk[i]) continue;
        cnt++;
        um[cnt] = um[cnt - 1] + i;
        //cout << um[cnt] << ' ';
    }
    //cout << '\n';
    for (int i = 1;i <= n;i++) {
        int sum = 0, c = 0;
        for (int j = 1;j <= 2 * n;j++) {
            sum += a[j];
            if (!a[j])c++;
            if (i == j) j += n - 1;
        }
        sum += um[c];
        mx = max(mx, sum);
    }
    cout << mx;
    return 0;
}