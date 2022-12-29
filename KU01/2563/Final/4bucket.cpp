#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int p[333], a[100100], cnt[333], mark[333], b[333];
void f(int u) {
    cnt[u]++;
    if (p[u] != 0) f(p[u]);
}
int fr(int u) {
    if (p[u] == 0) return u;
    return fr(p[u]);
}
stack<int> st;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        int s, e;
        cin >> s >> e;
        a[s] = a[e] = i;
    }
    for (int i = 1;i <= 100000;i++) {
        if (!a[i]) continue;
        if (st.empty()) st.push(a[i]);
        else if (st.top() == a[i]) st.pop();
        else {
            p[a[i]] = st.top();
            st.push(a[i]);
        }
    }
    for (int i = 1;i <= m;i++) {
        cin >> b[i];
        f(b[i]);
    }
    set<int> s;
    set<int>::iterator itr;
    for (int i = 1;i <= m;i++) {
        int t = cnt[fr(b[i])];
        int now = b[i];
        while (cnt[now] != t) {
            now = p[now];
        }
        s.insert(now);
    }
    cout << s.size() << '\n';
    for (itr = s.begin();itr != s.end();itr++) {
        cout << *itr << ' ';
    }
    return 0;
}