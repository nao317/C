#include <iostream>

using namespace std;

int main() {
    int n; string s; cin >> n >> s; while (s.length() < n) s = "o" + s; cout << s << endl; return 0;
}
