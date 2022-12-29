#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int a[200100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, t;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> t >> a[i];
    }
    int cnt = 0;
    for (int i = n;i >= 1;i--) {
        if (a[i] < a[i + 1]) {
            a[i] = a[i + 1];
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}