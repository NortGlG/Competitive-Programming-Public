#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int s[100100], e[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, mx = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> e[i];
        mx = max(mx, e[i]);
        s[min(e[i], e[i - 1]) + 1]++;
        s[max(e[i], e[i - 1])]--;
    }
    for (int i = 1;i <= 100000;i++) {
        s[i] = s[i] + s[i - 1];
    }
    s[0] = 0;
    for (int i = 0;i <= 100000;i++) {
        s[i + 2] += s[i];
        //cout << s[i] << ' ';
    }
    //cout << '\n';
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        b = min(mx, b);
        int op1 = (a - 2 + (a % 2) < 0) ? 0 : s[a - 2 + (a % 2)], op2 = (a - 2 + (1 - a % 2) < 0) ? 0 : s[a - 2 + (1 - a % 2)];
        cout << s[b - (b % 2)] - op1 << ' ' << s[b - (1 - b % 2)] - op2 << '\n';
    }
    return 0;
}