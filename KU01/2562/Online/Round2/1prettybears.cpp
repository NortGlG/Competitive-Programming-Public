#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, cnt = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int a, b;
        cin >> a >> b;
        if (a >= 100 && a <= 750 && b >= 80)cnt++;
    }
    cout << cnt;
    return 0;
}