#include <bits/stdc++.h>
using ll = long long;
using namespace std;

struct Node {
    int l = 0, r = 0, w = 0;
    bool sl = 0, sr = 0;
} a[1010];

int ans = 0;
int dfs(int i = 1) {
    if (a[i].w) {
        return a[i].w;
    }
    if (a[i].sl) a[i].l = dfs(a[i].l);
    if (a[i].sr) a[i].r = dfs(a[i].r);
    a[i].w = 2 * max(a[i].l, a[i].r);
    ans += max(a[i].l, a[i].r) - min(a[i].l, a[i].r);
    return a[i].w;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int s1, s2, w1, w2;
        cin >> s1 >> w1 >> s2 >> w2;
        if (s1 && s2) {
            a[i].w = 2 * max(w1, w2);
            ans += max(w1, w2) - min(w1, w2);
        }
        else {
            a[i].sl = 1 - s1;
            a[i].l = w1;
            a[i].sr = 1 - s2;
            a[i].r = w2;
        }
    }
    dfs();
    cout << ans;
    return 0;
}