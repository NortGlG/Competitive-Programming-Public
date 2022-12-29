#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int c1 = 0, c2 = 0;
    for (int i = 1;i <= n;i++) {
        int t; cin >> t;
        if (t <= 18)c1++;
        else c2++;
    }
    if (c1 >= c2 - 1) cout << n;
    else cout << n + c2 - c1 - 1;
    return 0;
}