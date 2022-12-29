#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[333], b[333];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for (int i = 1;i <= n;i++) {
        cin >> b[i];
    }
    int na = 1, nb = 1, cnt = 0;
    for (int i = 1;i <= n;i++) {
        int t1, b1, t2, b2;
        tie(t1, t2) = minmax(na, a[i]);
        tie(b1, b2) = minmax(nb, b[i]);
        if (b1 == t1 && b2 == t2) cnt++;
        else if ((t1<b2 && t1>b1) && (t2 > b2 || t2 < b1)) cnt++;
        else if ((t2<b2 && t2>b1) && (t1 > b2 || t1 < b1)) cnt++;
        na = a[i];
        nb = b[i];
    }
    cout << cnt;
    return 0;
}