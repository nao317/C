// abc414_b.cpp

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<string> c(n);
    vector<long long> len(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> len[i];
    }
    bool flag = false;
    long long curlen = 0;
    string syn = "";
    for (int i = 0; i < n; i++) {
        curlen += len[i];
        if (curlen <= 100) {
            for (int j = 0; j < len[i]; j++) {
                syn += c[i];
            }
        } else {
            cout << "Too Long" << endl;
            flag = true;
            break;
        }
    }
    if (!flag) {
        cout << syn << endl;
    }
    return 0;
}
