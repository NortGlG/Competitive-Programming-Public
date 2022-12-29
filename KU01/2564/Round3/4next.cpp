#include<bits/stdc++.h>
using namespace std;

int adj[100100];
bool mark[100100];
queue<int> q;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, ans = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int t;
        cin >> t;
        adj[i] = t;
    }
    for (int i = 1;i <= n;i++) {
        int cnt = 0;
        q.push(i);
        while (!q.empty()) {
            int t = q.front();
            q.pop();
            mark[t] = 1;
            cnt++;
            if (!mark[adj[t]]) q.push(adj[t]);
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}