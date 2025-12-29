#include <iostream>
#include <vector>
#include <cmath>
using ll = long long;
using namespace std;

const int MOD = 998244353;

// 負の数にも対応した % 演算
long long mod(long long val, long long m)
{
    long long res = val % m;
    if (res < 0)
        res += m;
    return res;
}

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b.at(i);
    }
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll diff = llabs(a[i] - b[j]);
            sum = (sum + diff % MOD) % MOD;
        }
    }
    cout << sum << endl;
    return 0;
}
