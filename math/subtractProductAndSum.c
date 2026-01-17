// LeetCode 1281. Subtract the Product and Sum of Digits of an Integer
// Calculate product of digits minus sum of digits using loop
int subtractProductAndSum(int n) {
    int sum = 0, a = 1;  // a for product
    while (n) {
        sum += n % 10;
        a *= n % 10;
        n /= 10;
    }
    return a - sum;
}
