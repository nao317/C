/* C - Minimum Glutton */

// https://atcoder.jp/contests/abc364/tasks/abc364_c

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int main() {
    long n, x, y;
    cin >> n >> x >> y;
    vector<long> a;
    vector<long> b;
    for (int i = 0; i < n; i++) {
        long num;
        cin >> num;
        a.push_back(num);
    }
    for (int i = 0; i < n; i++) {
        long num;
        cin >> num;
        b.push_back(num);
    }
    sort(a.begin(), a.end(), greater<long>());
    sort(b.begin(), b.end(), greater<long>());
    long suma = 0, sumb = 0;
    int index1 = 0, index2 = 0;
    for (int i = 0; i < n; i++) {
        suma += a[i];
        index1++;
        if (suma > x) {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        sumb += b[i];
        index2++;
        if (sumb > y) {
            break;
        }
    }
    cout << min(index1, index2) << endl;
    return 0;
}
