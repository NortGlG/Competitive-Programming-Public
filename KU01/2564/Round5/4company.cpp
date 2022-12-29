#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int deg[100100], mark[100100];
queue<int> q;
vector<int> adj[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, mx = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int l; cin >> l;
        for (int j = 1;j <= l;j++) {
            int a, b;
            cin >> a >> b;
            if (b > 50) {
                adj[i].push_back(a);
                adj[a].push_back(i);
                deg[a]++;
            }
        }
    }
    for (int i = 1;i <= n;i++) {
        if (deg[i] > 0) continue;
        int cnt = 0;
        q.push(i);
        mark[i] = 1;
        while (!q.empty()) {
            int t = q.front();
            q.pop();
            mark[t] = 1;
            for (auto x : adj[t]) {
                if (mark[x]) continue;
                cnt++;
                q.push(x);
            }
        }
        mx = max(mx, cnt);
    }
    cout << mx;
    return 0;
}