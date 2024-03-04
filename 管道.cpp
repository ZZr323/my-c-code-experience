#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int N = 1e5 + 10;
const int LEN = 1e9;
int n, len;
int L[N], S[N];
bool check(int t) {  // 检查t时刻，管道内是否都有水
    int cnt = 0;
    int last_L = 2, last_R = 1;
    for (int i = 0; i < n; i++)
        if (t >= S[i]) {
            cnt++;      //特判t是否够大
            int left = L[i] - (t - S[i]);
            int right = L[i] + (t - S[i]);
            if (left < last_L)
                last_L = left, last_R = max(last_R, right);
            else if (left <= last_R + 1)
                last_R = max(last_R, right);
        }
    if (cnt == 0) return false;
    if (last_L <= 1 && last_R >= len)
        return true;
    else
        return false;
}
int main() {
    scanf("%d%d", &n, &len);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &L[i], &S[i]);
    int L = 0, R = 2e9, ans = -1;
    while (L <= R) {                      //二分
        int mid = ((R - L) >> 1) + L;   //如果写成(L+R)>>1可能溢出
        if (check(mid)) ans = mid, R = mid - 1;
        else           L = mid + 1;
    }
    printf("%d\n", ans);
    return 0;
}
