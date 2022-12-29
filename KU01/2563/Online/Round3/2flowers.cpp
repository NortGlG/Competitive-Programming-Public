#include <bits/stdc++.h>
using ll = long long;
using namespace std;

queue<int> q[130300];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, l, c = 1, now = 0, o = 0, nq = 0;
    cin >> l >> n;
    while (1) {
        for (int j = 1;j <= l - o;j++) {
            now++;
            q[nq].push(now);
            if (now == n) {
                cout << c;
                return 0;
            }
        }
        if ((int)q[nq].size() <= l) o++;
        nq++;
        if (o == l) {
            c++;
            o = 0;
            nq = 0;
        }
    }
    return 0;
}