int fib (int n) {  // O(2 ^ n)
    if (n < 2) return n;

    return fib(n - 1) + fib(n - 2);
}