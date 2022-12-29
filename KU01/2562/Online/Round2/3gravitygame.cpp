#include<bits/stdc++.h>
using namespace std;
int cnt[110];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            char t;
            cin >> t;
            if (t == '#')cnt[i]++;
        }
    }
    sort(cnt + 1, cnt + n + 1);
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= cnt[i];j++)
            cout << '#';
        for (int j = 1;j <= n - cnt[i];j++)
            cout << '.';
        cout << '\n';
    }
    return 0;
}