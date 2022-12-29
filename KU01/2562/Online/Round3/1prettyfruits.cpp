#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1;i <= n;i++) {
        int w, l;
        cin >> l >> w;
        if (w * 100 <= l * 75) sum += 5;
        else sum += 3;
    }
    cout << sum;
    return 0;
}