#include <bits/stdc++.h>
using namespace std;

using ll = long long;
double a[22], b[22];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    double div = 0;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        div += a[i];
    }
    for (int i = 1;i <= n;i++) {
        cin >> b[i];
    }
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            cout << (a[i] * b[j]) / div << ' ';
        }
        cout << '\n';
    }
    return 0;
}