#include<bits/stdc++.h>
using namespace std;
long long a[100100], b[100100];
int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    for (int i = 1;i <= 200;i++) {
        b[cnt++] = i;
        for (int j = 1;j <= 9;j++) {
            b[cnt++] = i * 2;
        }
    }
    sort(b, b + cnt);
    int ans = 0;
    for (int i = 0;i < n;i++) {
        ans += a[i] * b[i];
    }
    cout << ans;
}