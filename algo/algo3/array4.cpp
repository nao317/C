#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    vector<ll> a(n); for (ll i = 0; i < n; i++) cin >> a[i];
    reverse(a.begin(), a.end());
    ll q; cin >> q;
    for (ll i = 0; i < q; i++) {
        int query; cin >> query;
        if (query == 0) {
            int v; cin >> v;
            a.push_back(v);
        } else {
            ll size = a.size(); 
            if (size == 0) {
                cout << "Error" << endl;
                continue;
            }
            cout << a[size - 1] << endl;
            a.pop_back();
        }
    }
    return 0;
}

