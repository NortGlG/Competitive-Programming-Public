#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int h1, h2, b1, b2, ans = 0;
    cin >> h1 >> h2 >> b1 >> b2;
    int x, y;
    cin >> x >> y;
    int a = h1, b = h2, c = b1, d = b2;
    for (int i = 0;i <= x;i++) {
        for (int j = 0;j <= y;j++) {
            h1 = a, h2 = b, b1 = c, b2 = d;
            int mx = 0, cnt = 0;
            for (int k = 1;k <= i;k++) {
                int mnb = min(h2, b2), mnw = min(h1, b1);
                if (mnb > mnw && h2 > 0 && b2 > 0) {
                    h2--;b2--;cnt++;
                }
                else if (h1 > 0 && b1 > 0) {
                    h1--; b1--; cnt++;
                }
            }
            for (int k = 1;k <= j;k++) {
                int mnb = min(h2, b1), mnw = min(h1, b2);
                if (mnb > mnw && h2 > 0 && b1 > 0) {
                    h2--;b1--;cnt++;
                }
                else if (h1 > 0 && b2 > 0) {
                    h1--; b2--; cnt++;
                }

            }
            h1 = a, h2 = b, b1 = c, b2 = d;
            cnt = 0;
            mx = cnt;
            for (int k = 1;k <= j;k++) {
                int mnb = min(h2, b1), mnw = min(h1, b2);
                if (mnb > mnw && h2 > 0 && b1 > 0) {
                    h2--;b1--;cnt++;
                }
                else if (h1 > 0 && b2 > 0) {
                    h1--; b2--; cnt++;
                }
            }
            for (int k = 1;k <= i;k++) {
                int mnb = min(h2, b2), mnw = min(h1, b1);
                if (mnb > mnw && h2 > 0 && b2 > 0) {
                    h2--;b2--;cnt++;
                }
                else if (h1 > 0 && b1 > 0) {
                    h1--; b1--; cnt++;
                }

            }
            mx = max(mx, cnt);
            ans = max(ans, mx);
        }
    }
    cout << ans;
    return 0;
}