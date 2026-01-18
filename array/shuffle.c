// LeetCode 1470. Shuffle the Array
// Given nums = [x1,x2,...,xn,y1,y2,...,yn], return [x1,y1,x2,y2,...,xn,yn]
// Use index mapping: xi -> 2*i, yi -> 2*i+1
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int *ans = (int*)malloc(sizeof(int) * 2 * n);
    for (int i = 0; i < n; i++) {
        ans[2 * i]     = nums[i];     // x_i
        ans[2 * i + 1] = nums[i + n]; // y_i
    }
    *returnSize = 2 * n;
    return ans;
}
