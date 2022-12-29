#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, s, mn = 0, mx = 0;
    cin >> n >> s;
    for (int i = 1;i <= n;i++) {
        int t;
        cin >> t;
        if (t % 4 == 0) {
            mn += 10 * t / 4;
        }
        else {
            mn += 10 * t / 3;
        }
        if (t % 3 == 0) {
            mx += 10 * t / 3;
        }
        else {
            mx += 10 * t / 4;
        }
    }
    cout << s - mx << ' ' << s - mn;
    return 0;
}