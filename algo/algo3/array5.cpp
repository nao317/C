#include <iostream>
#include <deque>

using namespace std;

using ll = long long;

int main() {
    ll n; cin >> n;
    deque<ll> a;
    for (ll i = 0; i < n; i++) {
        ll num; cin >> num;
        a.push_back(num);
    }
    ll q; cin >> q;
    for (ll i = 0; i < q; i++) {
        int query; cin >> query;
        if (query == 0) {
            int v; cin >> v;
            a.push_front(v);
        } else if (query == 1) {
            int v; cin >> v;
            a.push_back(v);
        } else {
            ll k; cin >> k;
            if (a.size() <= k) {
                cout << "Error" << endl;
                continue;
            }
            cout << a[k] << endl;
        }
    }
    return 0;
}

