#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int cnt = 0;
		for (int i = 1; !is_sorted(a.begin(), a.end()); i++) {
			if (i & 1) { // if 'i' is odd, then run f(i) in odd positions
				for (int j = 0; j < n - 1; j++) {
					if ((j + 1) & 1 && a[j] > a[j + 1]) {
						swap(a[j], a[j + 1]);
					}
				}
			} else { // otherwise, run f(i) in even positions
				for (int j = 0; j < n - 1; j++) {
					if ((j + 1) % 2 == 0 && a[j] > a[j + 1]) {
						swap(a[j], a[j + 1]);
					}
				}
			}
			// increment 'cnt'
			cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}