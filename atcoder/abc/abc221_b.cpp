#include <iostream>

using namespace std;


int main() {
    string s, t;
    cin >> s >> t;
    bool flag = false;
    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    } else {
        for (int i = 0; i < s.length() - 1; i++) {
            string sample = s;
            char c = sample.at(i);
            sample.at(i) = sample.at(i + 1);
            sample.at(i + 1) = c;
            if (sample == t) {
                cout << "Yes" << endl;
                flag = true;
                return 0;
            }
        }
    }
    if (flag == false) {
        cout << "No" << endl;
    }
    return 0;
}

// https://atcoder.jp/contests/abc221/submissions/72083826
