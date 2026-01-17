// LeetCode 258. Add Digits
// Recursively add digits until result has only one digit
int addDigits(int num) {
    if (num / 10 == 0) {
        return num;
    }
    int sum = 0;
    while (num / 10 >= 1) {
        sum += num % 10;
        num /= 10;
    }
    num += sum;
    return addDigits(num);
}
