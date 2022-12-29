#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[100100];
priority_queue<int> pq;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, cnt = 0;
    cin >> n;
    for (int i = 1;i <= n;i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    pq.push(a[1]);
    for (int i = 2;i <= n;i++) {
        if (pq.top() <= a[i]) {
            pq.push(a[i]);
        }
        else {
            pq.pop();
            pq.push(a[i]);
        }
    }
    while (!pq.empty()) {
        cnt++;
        pq.pop();
    }
    cout << cnt;
    return 0;
}