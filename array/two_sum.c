/**
 * Problem: Two Sum (LeetCode #1)
 * Given an array of integers, return indices of the two numbers that add up to target.
 * 
 * Approach: Use nested loop to check all pairs.
 * Time Complexity: O(n²), Space: O(1)
 */

#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: %d, %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No solution found.\n");
    return 0;
}
