#include <bits/stdc++.h>
using ll = long long;
using namespace std;

char a[35][35];
bool mark[35][35];
short di[4] = { 1,0,-1,0 }, dj[4] = { 0,1,0,-1 };
queue<pair<int, int>> q;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, cnt = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            cin >> a[i][j];
        }
    }
    q.emplace(1, 1);
    mark[1][1] = 1;
    while (!q.empty()) {
        cnt++;
        auto t = q.front();
        int i = t.first, j = t.second;
        q.pop();
        for (int k = 0;k < 4;k++) {
            int ii = i + di[k], jj = j + dj[k];
            if (ii<1 || jj<1 || ii>n || jj>n) continue;
            if (a[i][j] == a[ii][jj] || mark[ii][jj]) continue;
            mark[ii][jj] = 1;
            q.emplace(ii, jj);
        }
    }
    cout << cnt;
    return 0;
}