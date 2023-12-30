#include <stdio.h>

long long countQueues(int n) {
    long long dp[n + 1][3];


    dp[1][0] = 1;
    dp[1][1] = 0;
    dp[1][2] = 1;
    dp[2][0] = 1;
    dp[2][1] = 1;
    dp[2][2] = 1;

    for (int i = 3; i <= n; ++i) {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1] + dp[i-1][2];
        dp[i][1] = dp[i-1][2] + dp[i-2][0] + dp[i-2][1];
        dp[i][2] = dp[i-1][0];
    }
    return dp[n][1];
}

int main() {
    int n;
    scanf("%d", &n);

    long long result = countQueues(n);
    printf("%lld\n", result);

    return 0;
}
