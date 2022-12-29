#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int a[110];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    set<int> s;
    for (int i = 1;i <= n;i++) {
        int sum = 0;
        for (int j = i;j <= n;j++) {
            sum += a[j];
            s.insert(sum);
        }
    }
    cout << s.size();
    return 0;
}