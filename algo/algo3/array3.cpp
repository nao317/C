#include <iostream>
#include <vector>
#include <algorithm>

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
            reverse(a.begin(), a.end());
        } else if (query == 1) {
            int v;
            cin >> v;
            a.push_back(v);
        } else {
            if (a.size() == 0) {
                cout << "Error" << endl;
                continue;
            }
            cout << a[a.size() - 1] << endl;
            a.pop_back();
        }
    }
    return 0;
}
