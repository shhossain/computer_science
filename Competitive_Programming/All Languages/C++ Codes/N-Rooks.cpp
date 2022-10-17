int fact(int n) {
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
   return product;
}

int solve(int n) {
   return fact(n);
}
