// LeetCode 198. House Robber
// dp[i] = max profit robbing first i houses (0-indexed, dp[0]=0, dp[1]=nums[0])
// Recurrence: dp[i] = max(dp[i-1], dp[i-2] + nums[i-1])
int rob(int* nums, int numsSize) {
   int dp[numsSize+1];
   if(numsSize==1)return nums[0];
   dp[0]=0;
   dp[1]=nums[0];
   dp[2]=fmax(nums[0],nums[1]);
   for(int i=3;i<=numsSize;i++){
   dp[i]=fmax(dp[i-2]+nums[i-1],dp[i-1]); 
   }
   return dp[numsSize];
}
