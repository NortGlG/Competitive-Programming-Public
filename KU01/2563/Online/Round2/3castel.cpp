#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int c = ceil(sqrt(n)) - 1;
    if (c % 2) {
        if (n % 2) cout << 2 * c - 1;
        else cout << 2 * c;
    }
    else {
        if (n % 2) cout << 2 * c;
        else cout << 2 * c - 1;
    }
    return 0;
}