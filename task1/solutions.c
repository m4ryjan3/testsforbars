int buying_buns(int a, int b, int n) {
    if (a < 0 || b < 0 || n < 0) {
        return -1;
    }
    int ans = ((a * 100 + b) * n) % 100;
    return ans;
}