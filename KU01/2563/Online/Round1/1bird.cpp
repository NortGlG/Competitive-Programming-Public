#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[1010];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, cnt = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    for (int i = 1;i <= n;i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}