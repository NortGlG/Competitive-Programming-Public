#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[55], c[55], b[55];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    if (a[1] == n + 1)c[1] = 1;
    else c[1] = 0;
    if (k == 2) {
        b[1] = a[1];
        for (int i = 2;i <= n;i++) {
            if (a[i] > 3 * b[i - 1]) b[i] = a[i] - 2 * b[i - 1];
            else b[i] = a[i] - b[i - 1];
        }
        for (int i = 2;i <= n;i++) {
            if (b[i] == b[i - 1] + 1) c[i] = 1;
            else c[i] = 0;
        }
        for (int i = 1;i <= n;i++) cout << c[i] << '\n';
    }
    else {
        for (int i = 2;i <= n;i++) {
            if (a[i] == a[i - 1] + 1) c[i] = 1;
            else c[i] = 0;
        }
        for (int i = 1;i <= n;i++) cout << c[i] << '\n';
    }
    return 0;
}