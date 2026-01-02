#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

bool question(ll middle, vector<int> &x, ll k) {
    return x[middle] >= k;
}
bool binarySearch(int n, vector<int> &abc, ll k) {
    ll negative = -1;
    ll ok = n;
    while(ok - negative > 1) {
        ll middle = (negative + ok) / 2;
        if (question(middle, abc, k)) ok = middle;
        else negative = middle;
    }
    if (ok < n && abc[ok] == k) return true;
    return false;
}

int main() {
    
    int n, m, l;
    
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    cin >> l;
    vector<int> c(l);
    for (int i = 0; i < l; i++) cin >> c[i];
    
    ll q;
    cin >> q;
    vector<ll> x(q);
    vector< vector<int> > abc(n * m * l, vector<int>(3));
    int index = 0;
    for (ll i = 0; i < q; i++) cin >> x[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                abc[index][0] = a[i];
                abc[index][1] = b[j];
                abc[index][2] = c[k];
                index++;
            }
        }
    }

    vector<int> sum(n * m * l);
    for (int i = 0; i < n * m * l; i++) sum[i] = abc[i][0] + abc[i][1] + abc[i][2];
    sort(sum.begin(), sum.end());
    for (ll i = 0; i < q; i++) {
        if (binarySearch(n * m * l, sum, x[i])) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
