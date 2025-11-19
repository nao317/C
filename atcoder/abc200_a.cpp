// abc200_a.cpp

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; // 入力
    int result = n / 100;
    if (n % 100 != 0) {
        result++;
    }
    cout << result << endl;
    return 0;
}
