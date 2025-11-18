// abc414_a.cpp

#include <iostream>
using namespace std;

int main(void) {
    int n, l, r;
    cin >> n >> l >> r;
    // L to R が高橋くんが配信する時間
    // Nが繰り返す回数
    // X_i to Y_iがi番目のユーザが配信を見る時間
    // 最初から最後まで見られる人の数を求める
    int result = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x <= l && y >= r) {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}
