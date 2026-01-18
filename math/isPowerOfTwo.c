// LeetCode 231. Power of Two
// Method 2: Using bitwise trick n & (n-1) to check if only one bit is set
// Method 1: Loop divide by 2 (alternative)

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    // Power of two has exactly one '1' in binary: n & (n-1) == 0
    if ((n & (n - 1)) != 0) {
        return false;
    }
    return true;
}

/*
// Alternative Method 1: Loop
bool isPowerOfTwo_loop(int n) {
    if (n <= 0) return false;
    while (n > 1) {
        if (n % 2 != 0) return false;
        n /= 2;
    }
    return true;
}
*/
