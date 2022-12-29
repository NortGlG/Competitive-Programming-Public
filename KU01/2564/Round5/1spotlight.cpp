#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int st[369];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, mx = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int s, e;
        cin >> s >> e;
        for (int i = s;i != e;i++, i %= 360) {
            st[i] = 1;
        }
    }
    int cnt = 0;
    for (int i = 0;i < 720;i++) {
        if (st[i % 360] == 1) cnt++;
        else cnt = 0;
        mx = max(cnt, mx);
    }
    if (mx == 720) mx /= 2;
    cout << mx;
    return 0;
}