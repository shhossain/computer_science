bool solve(int n) {
   
   int t = n;
    int d = log10(n) + 1;
    int ld;
    int sum = 0;

    while (n) {
        ld = n % 10;
      
        sum += pow(ld, d);
       
        n = n / 10;
    }

    return sum == t;
}
