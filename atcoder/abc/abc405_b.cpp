#include <iostream>
#include <vector>

using namespace std;

bool judge(vector<int> &a, int m) {
    vector<int> check(m);
    for (int i = 0; i < m; i++) {
        check.at(i) = i + 1;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a.at(i) > m) {
            return false;
        }
    }
    bool flag = true;
    for (int i = 0; i < m; i++) {
        bool rawflag = true;
        for (int j = 0; j < a.size(); j++) {
            if (a.at(j) != check.at(i)) {
                rawflag = false;
            } else if (a.at(j) == check.at(i)) {
                rawflag = true;
                break;
            }
        }
        if (!rawflag) {
            flag = false;
            return false;
        }
    }
    return flag;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (judge(a, m)) {
            a.pop_back();
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
