#include <iostream>
#include <unordered_set>

using namespace std;

int next_number(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit * digit;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    unordered_set<int> seen;

    while (n != 1) {
        if (seen.count(n)) {
            cout << "No" << endl;
            return 0;
        }
        seen.insert(n);
        n = next_number(n);
    }

    cout << "Yes" << endl;
    return 0;
}
