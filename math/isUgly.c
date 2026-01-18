// LeetCode 263. Ugly Number
// An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
// Divide n by 2, 3, and 5 as much as possible, then check if result is 1.
bool isUgly(int n) {
    if (n <= 0) return false;

    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;

    return n == 1;
}
