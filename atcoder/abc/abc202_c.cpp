#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool question(long m, long k, vector<long> &a) {
    return a[m] >= k;
}
long binarySearch(long n, long k, vector<long> &a) {
    long ng = -1;
    long ok = n;
    while(ok - ng > 1) {
        long m = (ng + ok) / 2;
        if (question(m, k, a)) ok = m;
        else ng = m;
    }
    return ok;
}
int main() {
    long n;
    cin >> n;
    long count = 0L;
    vector<long> a(n);
    vector<long> b(n);
    vector<long> c(n);
    for (long i = 0; i < n; i++) cin >> a[i];
    for (long i = 0; i < n; i++) cin >> b[i];
    for (long i = 0; i < n; i++) cin >> c[i];
    sort(a.begin(), a.end());
    for (long i = 0; i < n; i++) c[i] = c[i] - 1;
    vector<long> bc(n);
    for (long i = 0; i < n; i++) bc[i] = b[c[i]];
    for (long i = 0; i < n; i++) {
        long left = binarySearch(n, bc[i], a);
        long right = binarySearch(n, bc[i] + 1, a);
        count = count + right - left;
    }
    cout << count << endl;
    return 0;
}

// https://atcoder.jp/contests/abc202/submissions/72087577
