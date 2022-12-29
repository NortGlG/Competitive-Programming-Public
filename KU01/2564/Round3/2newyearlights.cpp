#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int deg[100100];
vector<pair<int, int>> adj[100100];
queue<int> q;
bool mark[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 1;i <= m;i++) {
        int k; cin >> k;
        deg[i] = k;
        for (int j = 1;j <= k;j++) {
            int t; cin >> t;
            q.push(t);
        }
        int b; cin >> b;
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            adj[x].emplace_back(b, i);
        }
    }
    q.push(1);
    mark[1] = 1;
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        mark[t] = 1;
        cnt++;
        //cout << t << '\n';
        for (auto x : adj[t]) {
            deg[x.second]--;
            if (deg[x.second] <= 0 && !mark[x.first]) {
                q.push(x.first);
                mark[x.first] = 1;
            }
        }
    }
    cout << cnt;
    return 0;
}