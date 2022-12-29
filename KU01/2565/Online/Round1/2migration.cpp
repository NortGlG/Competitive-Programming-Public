#include <bits/stdc++.h>
using ll = long long;
using namespace std;

queue<pair<int, int>> q;
char a[33][33];
bool mark[33][33];
short di[4] = { 0,1,0,-1 }, dj[4] = { 1,0,-1,0 };
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int h, w, g;
    cin >> h >> w >> g;
    for (int i = 1;i <= h;i++) {
        for (int j = 1;j <= w;j++) {
            cin >> a[i][j];
        }
    }
    while (g--) {
        memset(mark, 0, sizeof mark);
        bool ch = 0;
        int x1, y1, x2, y2;
        int n;
        cin >> y1 >> x1 >> y2 >> x2 >> n;
        if (y2 > y1 + n || y2 < y1 - n) {
            cout << "0\n";
            continue;
        }
        q.emplace(y1, x1);
        while (!q.empty()) {
            auto t = q.front();
            int i = t.first, j = t.second;
            q.pop(); mark[i][j] = 1;
            if (i == y2 && j == x2) {
                while (!q.empty()) q.pop();
                cout << "1\n";
                ch = 1;
                break;
            }
            for (int k = 0;k < 4;k++) {
                int ii = i + di[k], jj = j + dj[k];
                if (ii<1 || jj<1 || ii>h || jj>w) continue;
                if (a[ii][jj] == '#' || mark[ii][jj] || ii < y1 - n || ii > y1 + n) continue;
                q.emplace(ii, jj);
            }
        }
        if (!ch) cout << "0\n";
    }
    return 0;
}