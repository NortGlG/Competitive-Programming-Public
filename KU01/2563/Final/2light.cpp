#include<bits/stdc++.h>
using namespace std;
int qs[1010], a[1010];
int main() {
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1;i <= n;i++) {
        qs[i] = a[i] + qs[i - 1];
    }
    for (int i = 1;i <= n;i++) {
        sum += qs[i] * 2;
    }
    cout << sum;
    return 0;
}