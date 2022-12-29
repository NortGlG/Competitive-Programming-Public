#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, h, mx = -1;
    cin >> n >> h;
    for (int i = 1;i <= n;i++) {
        int t;
        cin >> t;
        if (t > mx && t <= h) mx = t;
    }
    cout << mx;
    return 0;
}