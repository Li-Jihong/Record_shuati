#include <iostream>
#include <algorithm>

using namespace std;

int n, m, cnt;

bool get(int a, int b) {
    bool st = 1;
    for (int i = 0; i < n; i++) {
        if ((b + i) * (b + i) / 1000 == (a + i)) continue;
        else {
            st = 0;
            break;
        }
    }
    return st;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int maxx = i * 1000 + 999;
        for (int j = (int)pow(i * 1000, 0.5); j <= maxx / j; j++) {
            if (get(i, j)) {
                cout << i << " " << j << endl;
                cnt++;
            }
        }
    }
    if (!cnt) puts("No Solution.");
    return 0;
}