#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main() {
    long n; cin >> n;
    unordered_map<long, int> count;
    for (long a = 1; a * a <= n; a++) {
        for (long b = a + 1; a * a + b * b <= n; b++) {
            long n = a * a + b * b;
            count[n]++;
        }
    }
    
    vector<long> index;

    for (auto &address : count) {
        if (address.second == 1) {
            index.push_back(address.first);
        }
    }
    sort(index.begin(), index.end());
    cout << index.size() << endl;
    for (long i = 0; i < index.size(); i++) {
        if (i == index.size() - 1) {
            cout << index[i] << endl;
        } else {
            cout << index[i] << " ";
        }
    }
    return 0;
}