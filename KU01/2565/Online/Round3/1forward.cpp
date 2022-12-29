#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int p[1010];
bool mark[1010];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, now;
    cin >> n >> now;
    for (int i = 1;i <= n;i++) {
        cin >> p[i];
    }
    int cnt = 1;
    now = p[now];
    while (now != 0 && !mark[now]) {
        cnt++;
        mark[now] = 1;
        now = p[now];
    }
    cout << cnt;
    return 0;
}