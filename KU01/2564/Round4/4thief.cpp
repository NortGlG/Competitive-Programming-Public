#include<bits/stdc++.h>
using namespace std;


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k, t, cnt = 0, gg = 0;
    cin >> n >> k >> t;
    for (int i = 1;i <= n;i++) {
        cnt++;
        gg += k;
        gg %= n;
        int now = gg + 1;
        //cout << now << ' ';
        if (now == 1) {
            break;
        }
        else if (now == t) {
            cnt++;
            break;
        }
    }
    cout << cnt;
    return 0;
}