// LeetCode 1137. N-th Tribonacci Number
// T0=0, T1=1, T2=1, Tn = Tn-1 + Tn-2 + Tn-3 for n >= 3
// Solve iteratively with three state variables to avoid recursion or array allocation
int tribonacci(int n) {
    if (n == 0) return 0;
    if (n <= 2) return 1;

    int a = 0, b = 1, c = 1; // T0, T1, T2
    int next = 0;
    for (int i = 3; i <= n; i++) {
        next = a + b + c;
        a = b;
        b = c;
        c = next;
    }
    return next;
}
