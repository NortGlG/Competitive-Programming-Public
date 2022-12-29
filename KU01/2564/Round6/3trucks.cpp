#include <bits/stdc++.h>
using ll = long long;
using namespace std;

struct A {
    int s, e;
    bool operator < (const A& o) const {
        if (e != o.e) return e < o.e;
        return s < o.s;
    }
} a[2020];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, l;
    cin >> n >> l;
    for (int i = 1;i <= n;i++) {
        cin >> a[i].s >> a[i].e;
    }
    sort(a + 1, a + 1 + n);
    int c = 0;
    for (int i = 1, j; i <= n; i = j) {
        for (j = i + 1; j <= n && a[j].s <= a[i].e; j++);
        c++;
    }
    cout << c;
    return 0;
}