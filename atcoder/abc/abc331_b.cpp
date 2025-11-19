// abc331_b.cpp
// https://atcoder.jp/contests/abc331/tasks/abc331_b
#include <iostream>

using namespace std;
int cost[3];
bool mod (int n, int num) {
    bool flag = false;
    if (n % num != 0) {
        flag = true;
    }
    return flag;
}
int minimum (int n, int cost[]) {
    int sum1, sum2, sum3;
    int a = n / 6; int b = n / 8; int c = n / 12; 
    if (mod(n, 6)) {
        a++;
    }
    if (mod(n, 8)) {
        b++;
    }
    if (mod(n, 12)) {
        c++;
    }
    sum1 = cost[0] * a; sum2 = cost[1] * b; sum3 = cost[2] * c;
    if (sum2 > sum3) {
        sum2 = sum3;
    }
    int result = min(sum1, sum2);
    return result;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> cost[i];
    }
    cout << minimum(n, cost) << endl;
    return 0;
}
