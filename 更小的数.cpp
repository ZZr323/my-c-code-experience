#include <string>
#include <iostream>
using namespace std;
int dp[5010][5010];                     //全局数组，初始化为0
int main() {
    string s; cin >> s;
    int ans = 0;
    for (int k = 1; k < s.length(); k++) {        //第k轮递推。k=j-i
        for (int i = 0; i + k < s.length(); i++) {  //子串从s[i]开始
            int j = i + k;                          //子串末尾是s[j]
            if (s[i] > s[j])  dp[i][j] = 1;
            if (s[i] < s[j])  dp[i][j] = 0;
            if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
            if (dp[i][j] == 1)  ans++;
        }
    }
    cout << ans;
}


