int bad_apple(int k, int n) {
    if ((k < 0 || k > 10000) || (n < 0 || n > 10000)) {
        return -1;
    }
    return k % n;
}
