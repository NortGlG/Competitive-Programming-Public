#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int a[35][35];
queue<int> q;
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int sz = n;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++)
            scanf("%d", &a[i][j]);
        q.push(i);
    }
    while (sz != 1) {
        sz--;
        int n1 = q.front();
        q.pop();
        int n2 = q.front();
        q.pop();
        if (a[n1][n2] == n1) {
            if (n2 == k) {
                q.push(n2); k = 0;
            }
            else q.push(n1);
        }
        else {
            if (n1 == k) {
                q.push(n1); k = 0;
            }
            else q.push(n2);
        }
    }
    printf("%d", q.front());
    return 0;
}