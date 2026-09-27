int buying_buns(int a, int b, int n) {
    if (a < 0 || b < 0 || n < 0) {
        return -1;
    }
    int ans = ((a * 100 + b) * n) % 100;
    return ans;
}

int bad_apple(int k, int n) {
    if ((k < 0 || k > 10000) || (n < 0 || n > 10000)) {
        return -1;
    }
    return k % n;
}
