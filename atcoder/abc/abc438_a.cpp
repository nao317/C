#include <iostream>

using namespace std;

int main() {
    int d, f;
    cin >> d >> f;
    int df = d - f;
    int dfd = df % 7;
    int result = 7 - dfd;
    cout << result << endl;
    return 0;
}