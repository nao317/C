#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = 0;
    for (ll i = 0; i < n;)
    {
        ll j = i;
        while (j < n && a[j] == a[i]) j++;
        ll count = j - i;
        ans += count % 4;
        i = j;
    }

    cout << ans << endl;
    return 0;
}
