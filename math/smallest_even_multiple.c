/**
 * Problem: Smallest Even Multiple (LeetCode #2413)
 * Given a positive integer n, return the smallest positive integer 
 * that is a multiple of both 2 and n.
 * 
 * Approach:
 * - If n is even -> return n (since it's already divisible by 2)
 * - If n is odd  -> return 2 * n (smallest even multiple)
 * 
 * Example:
 *   n = 5 -> 10
 *   n = 6 -> 6
 * 
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

int smallestEvenMultiple(int n) {
    if (n % 2) {
        return n * 2;
    }
    return n;
}
