// LeetCode 746. Min Cost Climbing Stairs
// Each dp[i] represents the minimum cost to reach step i
// Transition: dp[i] = min(dp[i-1] + cost[i-1], dp[i-2] + cost[i-2])
int minCostClimbingStairs(int* cost, int costSize) {
    int n = costSize;
    int dp[n + 1];
    
    dp[0] = dp[1] = 0; // Base: can start from index 0 or 1 with no extra cost
    
    for (int i = 2; i <= n; i++) {
        dp[i] = fmin(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
    }
    
    return dp[n]; // Minimum cost to reach the top (beyond last step)
}
