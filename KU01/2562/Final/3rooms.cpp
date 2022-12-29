#include <bits/stdc++.h>
using ll = long long;
using namespace std;

queue<pair<int, int>> q;
int di[4] = { 1,0,-1,0 }, dj[4] = { 0,1,0,-1 };
char a[33][33];
bool mark[33][33];
vector<pair<int, int>> w;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m, si, sj, cnt = 0;
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            cin >> a[i][j];
            if (a[i][j] == 'W') w.emplace_back(i, j);
            else if (a[i][j] == 'A') si = i, sj = j;
        }
    }
    q.emplace(si, sj);
    mark[si][sj] = 1;
    while (!q.empty()) {
        auto t = q.front();
        int i = t.first, j = t.second;
        q.pop();
        if (a[i][j] == '*') cnt++;
        for (int k = 0;k < 4;k++) {
            int ii = i + di[k], jj = j + dj[k];
            if (ii<1 || jj<1 || ii>n || jj>m) continue;
            if (a[ii][jj] == '#' || mark[ii][jj]) continue;
            q.emplace(ii, jj);
            mark[ii][jj] = 1;
        }
        if (a[i][j] == 'W') {
            for (auto x : w) {
                int ii = x.first, jj = x.second;
                if (mark[ii][jj]) continue;
                q.emplace(ii, jj);
                mark[ii][jj] = 1;
            }
        }
    }
    cout << cnt;
    return 0;
}