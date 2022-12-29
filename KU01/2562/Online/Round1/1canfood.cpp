#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    int cnt = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int a, b;
        cin >> a >> b;
        if (a <= 400 && b >= 150 && b <= 200) cnt++;
    }
    cout << cnt;
    return 0;
}