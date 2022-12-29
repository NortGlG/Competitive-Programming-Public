#include<bits/stdc++.h>
using namespace std;
int a[110];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, l, mn = 2e9;
    cin >> n >> l;
    for (int i = 1;i <= n;i++) {
        int mx = -1;
        for (int j = 1;j <= l;j++) {
            cin >> a[j];
            mx = max(a[j] - a[j - 1], mx);
        }
        mn = min(mx, mn);
    }
    cout << mn;
    return 0;
}