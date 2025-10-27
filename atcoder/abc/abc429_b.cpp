#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    if (!(cin >> n >> m)) return 0;
    vector<int> vec(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        sum += vec[i];
    }
    if (n == 1) {
        if (m == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        return 0;
    }

    int result = sum - m; // 探すべき値
    for (int i = 0; i < n; ++i) {
        if (vec[i] == result) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
