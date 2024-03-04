#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 5e5 + 10;
int a[N];
bool vis[N];  //vis[i]=1表示已经免单了
int main() {
    int n; cin>>n;
    for (int i = 0; i < n; i++)   scanf("%d", &a[i]);
    sort(a, a + n);
    long long ans = 0;
    int cnt = 0;
    int last = -1;   //购买的2件中的便宜的那件
    int last_id = n - 1;   //能免单的位置
    for (int i = n - 1; i >= 0; i--) {
        if (!vis[i])
            cnt++, ans += a[i], last = a[i];  //last是买的第2件
        if (cnt == 2) {  //买了2个
            cnt = 0;
            int x = lower_bound(a, a + last_id, last / 2) - a;  //找能免单的商品a[x]
            if (x > last_id || a[x] > last / 2)  x--;   //向下取整
            if (x >= 0) {
                vis[x] = 1;   //x免单了
                last_id = x - 1; //后面能免单的区间范围是[0,last_id]
            }
        }
    }
    cout << ans << endl;
    return 0;
}
