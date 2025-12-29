/* C - Collision2 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    string query;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    cin >> query;
    vector<pair<int, char>> yd(n);
    for (int i = 0; i < n; i++) {
        yd[i] = {y[i], query[i]};
    }
    sort(yd.begin(), yd.end());
    // 2組ごとチェック
    bool truth = false; // 確認用
    for (int i = 1; i < n; i++) {
        if (yd[i-1].first == yd[i].first) {
            if (yd[i-1].second != yd[i].second) {
                cout << "Yes" << endl;
                truth = true;
                break;
            }
        }
    }
    if (!truth) {
        cout << "No" << endl;
    }
    return 0;
}
