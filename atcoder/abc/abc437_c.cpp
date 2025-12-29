#include <iostream>
#include <vector> 
#include <functional>
#include <numeric>
using namespace std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> tonakai(n); // w,p
        for (ll j = 0; j < n; j++) {
            cin >> tonakai[j].first >> tonakai[j].second;
        }
        // second:powerを基準にしてソート
        sort(tonakai.begin(), tonakai.end(), [](const pair<ll,ll> &former, const pair<ll,ll> &later){
            return former.second > later.second;
        });
        // 現時点での体重の総和を計算（うー、オーバーフローしそう）
        ll sumw = accumulate(tonakai.begin(), tonakai.end(), 0LL, [](ll sum, const pair<ll,ll> &item) {
            return sum + item.first;
        });
        ll power = 0;
        bool flag = false;
        for (ll j = 0; j < n; j++) {
            power += tonakai[j].second;
            sumw -= tonakai[j].first;
            if (power >= sumw) {
                cout << n - j - 1 << endl;
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << 0 << endl;
        }
    }
    return 0;
}