#include<bits/stdc++.h>
using namespace std;
pair<int, int> a[110];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, mn = 2e9;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int x, y;
        cin >> x >> y;
        a[i].first = x;
        a[i].second = y;
    }
    for (int i = 1;i <= n;i++) {
        for (int j = i + 1;j <= n;j++) {
            int sum = 0;
            for (int k = 1;k <= n;k++) {
                if (i == k || j == k) continue;
                int d1 = abs(a[i].first - a[k].first) + abs(a[k].second - a[i].second);
                int d2 = abs(a[j].first - a[k].first) + abs(a[j].second - a[k].second);
                sum += min(d1, d2);
            }
            mn = min(sum, mn);
        }
    }
    cout << mn;

    return 0;
}