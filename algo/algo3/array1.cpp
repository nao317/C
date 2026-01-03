#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        if (query == 0) {
            int k, v;
            cin >> k >> v;
            a.insert(a.begin() + k, v);
        } else if (query == 1) {
            int k;
            cin >> k;
            a.erase(a.begin() + k);
        } else {
            int v, ans = 0;
            cin >> v;
            for (int i = 0; i < a.size(); i++) if (a[i] == v) ans++;
            cout << ans << endl;
        }
    }
    return 0;
}
