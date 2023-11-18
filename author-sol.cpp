#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
    int q, x;
    cin >> q >> x;
    vector<int> mods(x);
    set<pair<int, int>> vals;
    for (int i = 0; i < x; i++) {
        vals.insert(make_pair(mods[i], i));
    }
    for (int i = 0; i < q; i++) {
        int cur;
        cin >> cur;
        cur %= x;
        vals.erase(make_pair(mods[cur], cur));
        ++mods[cur];
        vals.insert(make_pair(mods[cur], cur));
        cout << vals.begin()->first * x + vals.begin()->second << "\n";
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
// 	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
