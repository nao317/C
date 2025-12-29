#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool checker(string text) {
    bool flag = true;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] != text[text.length() - i - 1]) {
            flag = false;
        } else {
            continue;
        }
    }
    return flag;
}
int main() {
    string s;
    cin >> s;
    int ans = 1;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j <= s.length(); j++) {
            string text = "";
            for (int k = i; k < j; k++) text += s[k];
            if (checker(text)) {
                ans = max(ans, j - i);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
