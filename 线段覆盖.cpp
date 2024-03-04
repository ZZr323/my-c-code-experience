#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct dataa {
	int a, b;
}m[1000005];
bool cmp(dataa x, dataa y) {
	return x.b < y.b;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m[i].a >> m[i].b;
	}
	sort(m, m + n, cmp);
	int ans = 0;
	int left = -1;
	for (int i = 0; i < n; i++) {
		if (m[i].a >= left) {
			ans++;
			left = m[i].b;
		}
	}
	cout << ans;
	return 0;
}