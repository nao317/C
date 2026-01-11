#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) cin >> t[i];
    vector< pair<int, int> > ans(n);
    for (int i = 0; i < n; i++) {
        ans[i].first = t[i];
        ans[i].second = i + 1;
    }
    sort(ans.begin(), ans.end());
    cout << ans[0].second << " " << ans[1].second << " " << ans[2].second << endl;
    return 0;
}
