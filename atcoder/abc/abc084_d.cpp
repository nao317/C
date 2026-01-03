#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
#define N 101011
int main() {
    bitset<N> is_prime(0);
    for (int i = 2; i < N; i++) is_prime.set(i);
    for (int i = 2; i < N; i++) {
        if (is_prime[i]) {
            for (int j = i * 2; j < N; j += i) {
                is_prime.reset(j);
            } 
        }
    }
    vector<int> a(N, 0);
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) continue;
        else {if (is_prime[i] && is_prime[(i + 1) / 2]) a[i] = 1;}
    }
    vector<int> s(N + 1, 0);
    for (int i = 0; i < N; i++) {
        s[i + 1] = a[i] + s[i];
    }
    
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        cout << s[r + 1] - s[l] << endl;
    }
    return 0;
}
