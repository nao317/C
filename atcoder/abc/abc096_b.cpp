/* B - Maximum Sum */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a, b, c;
    int k;
    cin >> a >> b >> c;
    cin >> k;
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    sort(vec.begin(), vec.end(), greater<int>());
    int max = vec[0];
    for (int i = 0; i < k; i++) {
        max = max * 2;
    }
    cout << vec[1] + vec[2] + max << endl;
    return 0;
}