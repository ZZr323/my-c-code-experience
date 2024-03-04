#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[105];
int main() {
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	if (a[0] != 1) {
		cout << -1;
		return 0;
	}
	int s = 0, ans = 0;
	while (s < m) {
		for (int j = n - 1; j >= 0; j--) {
			if (a[j] <= s + 1) {
				s += a[j];
				ans++;
				break;
			}
		}
	}
	cout << ans;
}