#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;

    const int INF = 1e9;
    int result = INF;

    for (int i = 0; i + m - 1 <= n - 1; i++) {
        int x = 0;
        for (int j = 0; j < m; j++) {
            int a = t[j]-'0';
            int b = s[i+j]-'0';
            x += (b - a + 10) % 10;
        }
        result = min(result, x);
    }

    cout << result << endl;
}
