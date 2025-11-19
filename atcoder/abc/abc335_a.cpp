// abc335_a.cpp

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int length = s.length(); // 文字列の長さを取得
    s[length - 1] = '4'; // 最後の文字を4に変更
    cout << s << endl; // 改行して出力
    return 0;
}
