#include <iostream>
#include <vector>
using namespace std;

bool judge(int sum, int k) {
    if (sum <= k) {
        return true;
    }
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    int repeat = n;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        sum = a.at(i);
        int count = 0;
        while(judge(sum, k) && i < n) {
            count++;
            i += count;
        }
        repeat = n - count;
    }
    cout << repeat << endl;
    return 0;
}
