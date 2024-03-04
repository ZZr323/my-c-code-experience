#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct dataa {
	int s, t;
}a[100005];
bool cmp(dataa x, dataa y) {
	return x.s < y.s;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].s >>a[i].t;
	}
	sort(a, a + n, cmp);
	int cnt = 0;
	int right = -1;
	int longe=0;
	for (int i = 0; i < n; i++) {
		if (a[i].t >= right) {
			cnt++;
			longe += a[i].t - max(right, a[i].s) + 1;
			right = a[i].t + 1;

		}
	}
	cout << longe;
	return 0;

}