#include<bits/stdc++.h>
using namespace std;
char a[35][35];
bool mark[35][35];
queue<pair<int, int>> q;
int di[2] = { 0,-1 }, dj[2] = { -1,0 };
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, ans = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            cin >> a[i][j];
        }
    }
    q.emplace(n, n);
    while (!q.empty()) {
        auto t = q.front();
        int i = t.first, j = t.second;
        q.pop();
        if (!mark[i][j]) {
            mark[i][j] = 1;
            ans++;
        }
        for (int k = 0;k < 2;k++) {
            int ii = i + di[k], jj = j + dj[k];
            if (ii < 1 || jj < 1) continue;
            if (a[ii][jj] == 'X' || mark[ii][jj]) continue;
            q.emplace(ii, jj);
        }
    }
    cout << ans;

    return 0;
}