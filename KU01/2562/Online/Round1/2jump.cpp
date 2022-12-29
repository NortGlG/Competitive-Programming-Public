#include<bits/stdc++.h>
using namespace std;
bool a[110];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int mn = n;
    for (int i = 1;i <= n;i++) {
        char t;
        cin >> t;
        if (t == '#')a[i] = 1;
    }
    for (int i = 1;i <= n;i++) {
        if (!a[i]) continue;
        mn = min(max(i - 1, n - i), mn);
    }
    cout << mn;
    return 0;
}