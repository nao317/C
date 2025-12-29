#include <iostream>
#include <vector>

using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a.at(i).at(j);
        }
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b.at(i);
    }
    int max = 0;
    for (int i = 0; i < h; i++) {
        int count = 0;
        for (int j = 0; j < w; j++) {
            int check = a.at(i).at(j);
            for (int k = 0; k < n; k++) {
                if (b.at(k) == check) {
                    count++;
                }
            }
        }
        if (max < count) {
            max = count;
        }
    }
    cout << max << endl;
    return 0;
}
